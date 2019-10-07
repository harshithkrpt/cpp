#include <iostream>
#include<queue>
#include<stack>
#include<list>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

int isIdentical(Node *x, Node *y)
{
    if (x == nullptr && y == nullptr)
        return 1;
    return (x && y) && (x->key == y->key) && isIdentical(x->left, y->left) && isIdentical(x->right, y->right);
}

void deleteBinaryTree(Node* &root)
{
	if(root == nullptr) return;

	deleteBinaryTree(root->left);
	deleteBinaryTree(root->right);

	delete root;

	root = nullptr;
}

void deleteBinaryTreeIter(Node* &root)
{
	if(root == nullptr) return;
	queue<Node*> queue;
	queue.push(root);
	Node *front = nullptr;
	while(!queue.empty())
	{
		front = queue.front();
		queue.pop();
		if(front->left)
			queue.push(front->left);
		if(front->right)
			queue.push(front->right);
		delete front;
	}
	root = nullptr;
}

void inorder(Node *root)
{
	if(root == nullptr) return;
	inorder(root->left);
	cout << root->key << " ";
	inorder(root->right);
}

void inorderIterative(Node *root)
{
	stack<Node*> stack;
	Node *curr = root;
	while(!stack.empty() || curr != nullptr)
	{
		if(curr != nullptr)
		{
			stack.push(curr);
			curr = curr->left;
		}
		else
		{
			curr = stack.top();
			stack.pop();
			cout << curr->key << " ";
			curr = curr->right;
		}
	}
}

void preorder(Node *root)
{
	if(root == nullptr)
		return;
	cout << root->key << " ";
	preorder(root->left);
	preorder(root->right);
}

void preorderIterative(Node *root)
{
	if(root == nullptr)
		return;
	stack<Node*> stack;
	stack.push(root);
	while(!stack.empty())
	{
		Node * curr = stack.top();
		stack.pop();
		cout << curr->key << " ";
		if(curr->right)
			stack.push(curr->right);
		if(curr->left)
			stack.push(curr->left);
	}
}

void postorder(Node *root)
{
	if(root == nullptr) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->key << " ";
}

void postorderIterative(Node *root)
{
	stack<Node*> stk;
	stk.push(root);
	stack<int> out;
	while(!stk.empty())
	{
		Node *curr = stk.top();
		stk.pop();
		out.push(curr->key);
		if(curr->left)
			stk.push(curr->left);
		if(curr->right)
			stk.push(curr->right);
	}
	while(!out.empty())
	{
		cout << out.top() << " ";
		out.pop();
	}
}

bool printlevel(Node* root,int level)
{
	if(root == nullptr) return false;
	if(level == 1)
	{
		cout << root->key << " ";
		return true;
	}
	bool left = printlevel(root->left,level-1);
	bool right = printlevel(root->right,level-1);
	return left || right;
}

void levelorderTraversal(Node* root)
{
	int level = 1;
	while(printlevel(root,level))
		level++;
}


void levelOrderTraversalIterative(Node* root)
{
    // create an empty queue and enqueue root node
    list<Node*> queue;
    queue.push_back(root);
 
    // pointer to store current node
    Node* curr = nullptr;
 
    // run till queue is not empty
    while (queue.size())
    {
        // process each node in queue and enqueue their
        // non-empty left and right child to queue
        curr = queue.front();
        queue.pop_front();
 
        cout << curr->key << " ";
 
        if (curr->left)
           queue.push_back(curr->left);
 
        if (curr->right)
           queue.push_back(curr->right);
    }
}


int main()
{
    Node *x = nullptr;

    x = new Node(15);
    x->left = new Node(10);
    x->right = new Node(20);
    x->left->left = new Node(8);
    x->left->right = new Node(12);
    x->right->left = new Node(16);
    x->right->right = new Node(25);
    // construct second tree
    Node *y = nullptr;

    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(25);

    if (isIdentical(x, y))
        cout << "Given binary Trees are identical";
    else
        cout << "Given binary Trees are not identical";
	
    // delete entire tree
    deleteBinaryTreeIter(x);
    inorder(y);
    cout << " " << endl;
    inorderIterative(y);
    cout << " " << endl;
    preorder(y);    
    cout << " " << endl;
    preorderIterative(y);
    cout << " " << endl;
    postorder(y);
    cout << " " << endl;
    postorderIterative(y);
    cout << " " << endl;
    levelorderTraversal(y);
    cout << " " << endl;

    levelOrderTraversalIterative(y);

    if (x == nullptr)
        cout << "Tree Successfully Deleted";
    return 0;
}
