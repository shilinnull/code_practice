#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

enum Colour
{
	RED,
	BLACK
};

template<class K, class V>
struct RBTreeNode
{
	//������
	RBTreeNode<K, V>* _left;
	RBTreeNode<K, V>* _right;
	RBTreeNode<K, V>* _parent;

	//�洢�ļ�ֵ��
	pair<K, V> _kv;

	//������ɫ
	Colour _col; //��/��

	//���캯��
	RBTreeNode(const pair<K, V>& kv)
		:_left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _kv(kv)
		, _col(RED)
	{}
};


template<class K, class V>
class RBTree
{
	typedef RBTreeNode<K, V> Node;
public:

	//���뺯��
	pair<Node*, bool> Insert(const pair<K, V>& kv)
	{
		if (_root == nullptr) //�������Ϊ�������������ֱ����Ϊ�����
		{
			_root = new Node(kv);
			_root->_col = BLACK; //���������Ǻ�ɫ
			return make_pair(_root, true); //����ɹ�
		}
		//1���������������Ĳ��뷽�����ҵ�������λ��
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (kv.first < cur->_kv.first) //���������keyֵС�ڵ�ǰ����keyֵ
			{
				//���ý�����������
				parent = cur;
				cur = cur->_left;
			}
			else if (kv.first > cur->_kv.first) //���������keyֵ���ڵ�ǰ����keyֵ
			{
				//���ý�����������
				parent = cur;
				cur = cur->_right;
			}
			else //���������keyֵ���ڵ�ǰ����keyֵ
			{
				return make_pair(cur, false); //����ʧ��
			}
		}

		//2��������������뵽����
		cur = new Node(kv); //��������ֵ����һ�����
		Node* newnode = cur; //��¼�²���Ľ�㣨���ں��򷵻أ�
		if (kv.first < parent->_kv.first) //�½���keyֵС��parent��keyֵ
		{
			//���뵽parent�����
			parent->_left = cur;
			cur->_parent = parent;
		}
		else //�½���keyֵ����parent��keyֵ
		{
			//���뵽parent���ұ�
			parent->_right = cur;
			cur->_parent = parent;
		}

		//3����������ĸ�����Ǻ�ɫ�ģ�����Ҫ�Ժ�������е���
		while (parent && parent->_col == RED)
		{
			Node* grandfather = parent->_parent; //parent�Ǻ�ɫ�����丸���һ������
			if (parent == grandfather->_left) //parent��grandfather������
			{
				Node* uncle = grandfather->_right; //uncle��grandfather���Һ���
				if (uncle && uncle->_col == RED) //���1��uncle������Ϊ��
				{
					//��ɫ����
					parent->_col = uncle->_col = BLACK;
					grandfather->_col = RED;

					//�������ϴ���
					cur = grandfather;
					parent = cur->_parent;
				}
				else //���2+���3��uncle������ + uncle������Ϊ��
				{
					if (cur == parent->_left)
					{
						RotateR(grandfather); //�ҵ���

						//��ɫ����
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					else //cur == parent->_right
					{
						RotateLR(grandfather); //����˫��

						//��ɫ����
						grandfather->_col = RED;
						cur->_col = BLACK;
					}
					break; //������ת�󣬸������ĸ�����˺�ɫ������������Ͻ��д���
				}
			}
			else //parent��grandfather���Һ���
			{
				Node* uncle = grandfather->_left; //uncle��grandfather������
				if (uncle && uncle->_col == RED) //���1��uncle������Ϊ��
				{
					//��ɫ����
					uncle->_col = parent->_col = BLACK;
					grandfather->_col = RED;

					//�������ϴ���
					cur = grandfather;
					parent = cur->_parent;
				}
				else //���2+���3��uncle������ + uncle������Ϊ��
				{
					if (cur == parent->_left)
					{
						RotateRL(grandfather); //����˫��

						//��ɫ����
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					else //cur == parent->_right
					{
						RotateL(grandfather); //����

						//��ɫ����
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					break; //������ת�󣬸������ĸ�����˺�ɫ������������Ͻ��д���
				}
			}
		}
		_root->_col = BLACK; //��������ɫΪ��ɫ�����ܱ����һ����˺�ɫ����Ҫ��غ�ɫ��
		return make_pair(newnode, true); //����ɹ�
	}

	//����
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		Node* parentParent = parent->_parent;

		//����subRL��parent֮�����ϵ
		parent->_right = subRL;
		if (subRL)
			subRL->_parent = parent;

		//����parent��subR֮�����ϵ
		subR->_left = parent;
		parent->_parent = subR;

		//����subR��parentParent֮�����ϵ
		if (parentParent == nullptr)
		{
			_root = subR;
			_root->_parent = nullptr;
		}
		else
		{
			if (parent == parentParent->_left)
			{
				parentParent->_left = subR;
			}
			else
			{
				parentParent->_right = subR;
			}
			subR->_parent = parentParent;
		}
	}

	//�ҵ���
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		Node* parentParent = parent->_parent;

		//����subLR��parent֮�����ϵ
		parent->_left = subLR;
		if (subLR)
			subLR->_parent = parent;

		//����parent��subL֮�����ϵ
		subL->_right = parent;
		parent->_parent = subL;

		//����subL��parentParent֮�����ϵ
		if (parentParent == nullptr)
		{
			_root = subL;
			_root->_parent = nullptr;
		}
		else
		{
			if (parent == parentParent->_left)
			{
				parentParent->_left = subL;
			}
			else
			{
				parentParent->_right = subL;
			}
			subL->_parent = parentParent;
		}
	}

	//����˫��
	void RotateLR(Node* parent)
	{
		RotateL(parent->_left);
		RotateR(parent);
	}

	//����˫��
	void RotateRL(Node* parent)
	{
		RotateR(parent->_right);
		RotateL(parent);
	}


	//�������
	void Inorder()
	{
		_Inorder(_root);
	}
	//��������Ӻ���
	void _Inorder(Node* root)
	{
		if (root == nullptr)
			return;
		_Inorder(root->_left);
		cout << root->_kv.first << " ";
		_Inorder(root->_right);
	}

	//�ж��Ƿ�Ϊ�����
	bool ISRBTree()
	{
		if (_root == nullptr) //�����Ǻ����
		{
			return true;
		}
		if (_root->_col == RED)
		{
			cout << "error�������Ϊ��ɫ" << endl;
			return false;
		}

		//������·����Ϊ��ɫ�����Ŀ�Ĳο�ֵ
		Node* cur = _root;
		int BlackCount = 0;
		while (cur)
		{
			if (cur->_col == BLACK)
				BlackCount++;
			cur = cur->_left;
		}

		int count = 0;
		return _ISRBTree(_root, count, BlackCount);
	}
	//�ж��Ƿ�Ϊ��������Ӻ���
	bool _ISRBTree(Node* root, int count, int BlackCount)
	{
		if (root == nullptr) //��·���Ѿ�������
		{
			if (count != BlackCount)
			{
				cout << "error����ɫ������Ŀ�����" << endl;
				return false;
			}
			return true;
		}

		if (root->_col == RED && root->_parent->_col == RED)
		{
			cout << "error�����������ĺ�ɫ���" << endl;
			return false;
		}
		if (root->_col == BLACK)
		{
			count++;
		}
		return _ISRBTree(root->_left, count, BlackCount) && _ISRBTree(root->_right, count, BlackCount);
	}


	//���Һ���
	Node* Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (key < cur->_kv.first) //keyֵС�ڸý���ֵ
			{
				cur = cur->_left; //�ڸý������������в���
			}
			else if (key > cur->_kv.first) //keyֵ���ڸý���ֵ
			{
				cur = cur->_right; //�ڸý������������в���
			}
			else //�ҵ���Ŀ����
			{
				return cur; //���ظý��
			}
		}
		return nullptr; //����ʧ��
	}



private:
	Node* _root;
};