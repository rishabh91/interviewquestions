#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};

Node* insertinend(Node* head,int val)
{
	if(head!=NULL)
	{
		Node *temp = head;
		Node *newnode = new Node();
		newnode->data = val;
		newnode->next = NULL;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next = newnode;
	}
	else
	{
		head = new Node();
		head->data = val;
		head->next = NULL;
	}
	return head;

}
void printlist(Node* head)
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{
	Node* head=NULL;
	int listSize,data;
	cout<<"Enter ur liist size"<<endl;
	cin>>listSize;
	cout<<"Enter "<<listSize<<" elements"<<endl;
	for(int i=0;i<listSize;i++)
	{

		cin>>data;
		head = insertinend(head,data);
	}
	cout<<"The list you entered is "<<endl;
	printlist(head);
	return 0;
}