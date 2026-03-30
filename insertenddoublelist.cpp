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
void insertatend(int a)
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
    node*temp=head;
    while(temp->next!=NULL)
    {
    	temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
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
	d.insertatend(51);
	d.insertatend(5);
d.insertatend(55);
	d.insertatend(325);
	d.insertatend(35);
d.insertatend(45);
	d.insertatend(555);
	d.display();
	return 0;
}
