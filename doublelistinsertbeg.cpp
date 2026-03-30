#include<iostream>
using namespace std;

struct node{
node*next;
node*prev;
int data;
};
class doublelist{
node *head;
public:
doublelist()
{
head=NULL;
}
void insertatbeg(int a)
{    
	node *newnode=new node;
	newnode->data=a;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
	}	
 void display()
 {
 	node *temp=head;
 	while(temp!=NULL)
 	 { cout<<temp->data<<"->";
 	 	temp=temp->next;
	  }
	  cout<<"NULL";
}
	
};
int main()
{
	doublelist d;
	d.insertatbeg(5);
	d.insertatbeg(8);
	d.insertatbeg(6);
	d.insertatbeg(9);
	d.insertatbeg(3);
	d.insertatbeg(7);
	d.insertatbeg(1);
	d.display();
	return 0;
}
