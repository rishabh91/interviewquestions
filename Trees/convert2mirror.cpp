#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* right;
	Node* left;
};

void toMirror(Node* node)
{
	Node* temp ;
	if(node==NULL) return;

	else
	{
		toMirror(node->left);
		toMirror(node->right);

		temp = node->left;
		node->left = node->right;
		node->right = temp;

	}
}

Node* addNode(Node* root, int value)
{
	if(root==NULL)
	{
		Node* node = new Node();
		node->data = value;
		node->right = NULL;
		node->left = NULL;
		root = node;
	}
	return root;
}

void inorder(Node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<endl;
		inorder(root->right);
	}
}

int main()
{
	int val;
	Node* head=NULL;
	head = addNode(head,1);
	head->left = addNode(head->left,2);
	head->right = addNode(head->right,3);
	inorder(head);
	toMirror(head);
	inorder(head);
	return 0;
}