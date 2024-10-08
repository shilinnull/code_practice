#define _CRT_SECURE_NO_WARNINGS 1

#include"tree.h"


void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->val);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->val);
	InOrder(root->right);
}


void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->val);
}

void TreeSize_1(BTNode* root,int* psize)
{
	if (root == NULL)
		return;
	else
		++(*psize);
	TreeSize_1(root->left, psize);
	TreeSize_1(root->right, psize);
}


int TreeSize_2(BTNode* root)
{
	return root == NULL ? 0 : TreeSize_2(root->left) + TreeSize_2(root->right) + 1;
}


int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}


void Leve1Order(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->val);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");
	QueueDestroy(&q);
}

//好
void DestoryTree(BTNode* root)
{
	if (root == NULL)
		return;

	DestoryTree(root->left);
	DestoryTree(root->right);

	free(root);
	root = NULL;
}