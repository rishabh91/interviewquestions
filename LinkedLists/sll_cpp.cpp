#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};

Node* insertontop(Node* head,int val)
{
	Node *temp = head;
	Node *top = new Node();
	top->data = val; 
	top->next = temp;
	head = top;
	return head;
}

Node* insertinbetween(Node* head,int position,int val)
{
	if(position>1)
	{
		int counter = 1;
		Node* temp = head;
		Node* temp1;
		Node* newnode = new Node();
		newnode->data=val;
	
		while(temp!=NULL && counter<position)
		{
			temp1 = temp;
			temp = temp->next;
			counter++;
		}
		temp1->next = newnode;
		newnode->next=temp;
	}
	else if(position==1)
	{
		head = insertontop(head,val);
	}
	return head;
}
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

Node* deletefromtop(Node* head)
{
	Node* temp ;
	temp = head->next;
	delete head; //freeing the memory
	head = temp;
	return head;
}

Node* deletefromlist(Node* head,int position)
{
	if (position!=1)
	{	int counter = 1;
		Node* temp = head;
		Node* del ;
		while(temp!=NULL && counter<position)
		{
			del = temp;
			temp = temp->next;
			counter++;
		}
		
			del->next = temp->next;
			delete temp;
			
	}
	else if(position==1)
	{
		head=deletefromtop(head);

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