#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* right;
	Node* left;
};
bool isMirror(Node* tree1, Node* tree2)
{
	if(tree1==NULL && tree2== NULL) {return true;}

	else if (tree1==NULL || tree2==NULL)
		{return false;}
	return (tree1->data == tree2->data && isMirror(tree1->left,tree2->right) && isMirror(tree1->right,tree2->left));
	

}
int main()
{
	// write the driver program here 
}