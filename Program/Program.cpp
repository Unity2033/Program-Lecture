#include <iostream>

using namespace std;

template <typename T>
class Tree
{
private:
	struct Node
	{
		T data;
		Node * left;
		Node * right;

		Node(T data)
		{
			this->data = data;

			left = nullptr;
			right = nullptr;
		}
	};

	Node * root;

public:
	Tree()
	{
		root = nullptr;
	}

	void insert(T data)
	{
		if (root == nullptr)
		{
			root = new Node(data);
		}
		else
		{
			Node * currentNode = root;

			while (currentNode != nullptr)
			{
				if (data < currentNode->data)
				{
					if (currentNode->left == nullptr)
					{
						currentNode->left = new Node(data);
					}
					else
					{
						currentNode = currentNode->left;
					}
				}
				else if (data > currentNode->data)
				{
					if (currentNode->right == nullptr)
					{
						currentNode->right = new Node(data);
					}
					else
					{
						currentNode = currentNode->right;
					}
				}
				else
				{
					break;
				}

			}
		}

	}

};

int main()
{ 	
	Tree<int> tree;

	tree.insert(10);
	tree.insert(20);
	tree.insert(13);
	tree.insert(22);
	tree.insert(17);
	tree.insert(19);

	return 0;
}

