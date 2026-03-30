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
	  cout<<"NULL"<<endl;
}
void insertatposition(int a)
	{
		int b;
		int c=1;
		cout<<"enter the position to be inserted"<<endl;
		cin>>b;
		node *temp=head;
		if(b==1)
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
		
		
		while(c<b-1&&temp->next!=NULL)
		{
			temp=temp->next;
			c++;
		}
		if(temp->next==NULL)
		{
			node*newnode=new node;
			newnode->data=a;
	     newnode->prev=NULL;
	      newnode->next=NULL;
	      temp->next=newnode;
        	newnode->prev=temp;
        	return;
		}
		node*newnode=new node;
		newnode->next=NULL;
		newnode->prev=NULL;
		newnode->data=a;
		temp->next->prev=newnode;
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
		
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
	d.insertatposition(98);
	d.display();
	return 0;
}
