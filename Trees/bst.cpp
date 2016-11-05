#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* buildtreeroot(Node* root,int value)

{
	Node* newnode = new Node();
	newnode->data = value;
	newnode->left = NULL;
	newnode->right = NULL;
	root = newnode;
	return root;
}
Node* insertintree(Node* root,int value)

{
	
	if(root==NULL)
	{
		Node* newnode = new Node();
		newnode->data=value;
		newnode->right=NULL;
		newnode->left=NULL;
		root = newnode;
		
	}
	else if(root->data < value)
	{
		
		root->right = insertintree(root->right,value);
		cout<<"in here at root<val "<<endl;
		
	}
	else if(root->data > value)
	{
		
		root->left = insertintree(root->left,value);
		cout<<"in here at root>val "<<endl;
		

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
void preorder(Node* root)
{
	if(root!=NULL)
	{
		cout<<root->data<<endl;
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(Node* root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<endl;

	}
}
Node* minValueNode(Node* node)
{
     Node* current = node;
 
    
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
/*
Deleting involves three cases
1) Deleting leaf nodes. (Simply delete the node)
2) Node with single child node. (Delete the node & reattach the leaf node to deleted nodes parent)
3) Node with two or more than two child. Find the inorder minimum valued node & swap its content with the node to be deleted
then delete the node.
*/
Node *deletefromtree(Node* root,int value)
{

	if(root==NULL) return root;

	else if (root->data>value)
	{
		root->left = deletefromtree(root->left,value);
	}
	else if (root->data<value)
	{
		root->right = deletefromtree(root->right,value);
	}
	else
	{
		if (root->left==NULL)
		{
			Node* temp = root->right;
			delete(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			Node* temp = root->left;
			delete(root);
			return temp;
		}
		Node *temp = minValueNode(root->right);
		root->data = temp->data;
		root->right = deletefromtree(root->right,temp->data);

	}
	return root;
}
int main()
{
	Node* root = NULL;
	int value;
	cout<<"Enter the  value you want at the root of  your BST "<<endl;
	cin>> value;
	root = buildtreeroot(root,value);
	int iter = 5;
	//Node* temp = root;
	while(iter)
	{
		
		cout<<"Enter the next element to insert in tree "<<endl;
		cin>>value;
		 insertintree(root,value);
		iter--;
	}
	cout<<"The inorder traversal of the tree would look like "<<endl;
	inorder(root);
	cout<<"The preorder traversal of the tree would look like "<<endl;
	preorder(root);
	cout<<"The postorder traversal of the tree would look like "<<endl;
	postorder(root);
	cout<<"Enter the element you want to delete "<<endl;
	cin>>value;
	deletefromtree(root,value);
	cout<<"modified tree is "<<endl;
	inorder(root);

	
	

	return 0;

}