#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
//Program to print a node
void print(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
//Program to add a node at head
void addhead(node **n,int d)
{
	node *add =new node();
	add->data=d;
	add->next=*n;
	*n=add;
}
//Program to add a node in between
void inbetween(node *n,int d)
{
	if(n==NULL)
	{
		cout<<"Not Possible you dumb";
		return;
	}
	node *add=new node();
	add->data=d;
	add->next=n->next;
	n->next=add;
	
}
//Program to add a node in end
void end(node *n,int data)
{
	node *e=new node();
	n->next=e;
	e->data=data;
	e->next=NULL;
}
int main()
{
	//Beginning with three nodes.
	node *head = new node();
	node *second = new node();
	node *third  = new node();
	head->next = second;
	second->next = third;
	third->next = NULL;
	head -> data=1;
	second -> data=2;
	third -> data=3;
	addhead(&head,5);
	inbetween(second,8);
	end(third,58);
	print(head);
}
