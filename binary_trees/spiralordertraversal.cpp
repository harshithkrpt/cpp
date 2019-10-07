#include<iostream>
using namespace std;

struct Node
{
	int key;
	Node *left,*right;
	Node(int key)
	{
		this->key = key;
		this->left = this->right = nullptr;
	}
};

bool printLevelLeftToRight(Node *root,int level)
{
	if(root == nullptr)
		return false;
	if(level == 1)
	{
		cout << root->key << " ";
		return true;
	}

	bool right = printLevelLeftToRight(root->left,level-1);
	bool right = printLevelLeftToRight(root->right,level-1)
}
