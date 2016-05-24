//1. n-1th to last node using recursion 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct node{
	int data;
	struct node *next;
};
void push(struct node** head, int data)
{
	node *temp = new node;
	temp->data = data;
	temp->next = (*head);
	(*head) = temp;
}
void lastbutone(struct node* head)
{
	node *temp = head;
	while(temp->next->next != NULL)
	{
		temp = temp->next;
	}
	cout<<(temp->data);
}
void printList(struct node *node)
{
	while(node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
	cout<<endl;
}
int main()
{
	struct node* head = NULL;
	push(&head,7);
	push(&head,6);
	push(&head,3);
	push(&head,2);
	push(&head,2);
	
	printList(head);
	lastbutone(head);	
	//printList(head);
	return 0;
}
//2. Print n-1 th to last node using two pointers
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct node{
	int data;
	struct node *next;
};
void push(struct node** head, int data)
{
	node *temp = new node;
	temp->data = data;
	temp->next = (*head);
	(*head) = temp;
}
void lastbutone(struct node* head,int n)
{
	node *p1 = head;
	node *p2 = head;
	for(int j=0;j<n-1;++j)
	{
		if(p2==NULL)
		{
			cout<<"NULL";
		}
		p2 = p2->next;
	}
	while(p2->next!=NULL)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	cout<<p1->data;
}
 
void printList(struct node *node)
{
	while(node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
	cout<<endl;
}
int main()
{
	struct node* head = NULL;
	push(&head,7);
	push(&head,6);
	push(&head,3);
	push(&head,2);
	push(&head,2);
	
	printList(head);
	lastbutone(head,3);	
	//printList(head);
	return 0;
}
