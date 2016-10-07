#include <iostream>
using namespace std;
 struct Node
 {
 	int data;
 	Node* prev;
 	Node* next;
 };

 Node* buildlist(Node* head,int data)
 {
 	if(head!=NULL)
 	{
 		Node *temp = head;
 		Node *newnode = new Node();
 		newnode->data = data;
 		newnode->next = NULL;
 		while(temp->next!=NULL)
 		{
 			temp = temp->next;
 		}
 		temp->next = newnode;
 		newnode->prev = temp;
 	}
 	else
 	{
 		head = new Node();
 		head->data = data;
 		head->next = NULL;
 		head->prev = NULL;
 	}
 	return head;
 }

 void printlist(Node* head)
 {
 	Node *temp = head;
 	Node* thullu;
	int counter=1;
	while(temp!=NULL)
	{
		if(counter>1)
		{
			cout<<"the current element is"<<temp->data<<endl;
		thullu = temp->prev;
		cout<<"the prev element is"<<thullu->data<<endl;

		}	
		else{
			cout<<"the head is " <<temp->data<<endl;
		}	
		temp = temp->next;
		counter++;
	}
 }

int main()
{
	
	Node *head=NULL;
	int number,num;
	cout<<"Give ur list size"<<endl;
	cin>>number;
	cout<<"Enter "<<number<<"elements"<<endl;
	for(int i=1;i<=number;i++)
	{
		
		cin>>num;
		head = buildlist(head,num);// fucking head does'nt change after initialization figured out a way not to have a seperate list init method clubbed it into buildlist
	}
	cout<<"The list you entered is "<<endl;
	printlist(head);

	return 0;
}