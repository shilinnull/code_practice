#pragma once

#include <vector>

class UnionFindSet
{
public:
	// 初始时，将数组中元素全部设置为-1
	UnionFindSet(size_t size)
		:_ufs(size, -1)
	{}
	
	// 给一个元素的编号，找到该元素所在集合的名称
	int FindRoot(int index)
	{
		// 如果数组中存储的是负数，找到，否则一直继续
		while (_ufs[index] >= 0)
		{
			index = _ufs[index];
		}
		return index;
	}

	bool Union(int x1, int x2)
	{
		int root1 = FindRoot(x1);
		int root2 = FindRoot(x2);

		// x1已经与x2在同一个集合
		if (root1 == root2)
			return false;

		if (root2 < root1)
			std::swap(root1, root2);
		
		// 将两个集合中元素合并
		_ufs[root1] = _ufs[root2];
		// 将其中一个集合名称改变成另外一个
		_ufs[root2] = root1;
		return true;
	}

	// 数组中负数的个数，即为集合的个数
	size_t Count() const
	{
		size_t count = 0;
		for (auto e : _ufs)
		{
			if (e < 0)
				count++;
		}
		return count;
	}

private:
	std::vector<int> _ufs;
};

