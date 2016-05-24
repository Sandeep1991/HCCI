//2.4 Adding the values of two linked lists.
// There is an error in the logic if value>10 carry = value/10 
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

void printList(struct node *node)
{
	while(node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
	cout<<endl;
}

void addlists(struct node* n, struct node* n1)//::printList(struct node* node)
{
	if(n == NULL && n1 == NULL)
		cout<<"NULL"<<endl;
	node *temp = n;
	node *temp1 = n1;
	int carry=0,value=0,value1=0;
	struct node* h = NULL;
	while(temp!=NULL || temp1 != NULL)
	{
		value = temp->data + temp1->data + carry;
		value1 = value % 10;
		push(&h,value1);
		carry = value / 10;
		temp = temp->next;
		temp1 = temp1->next;
	}
	if(carry) push(&h,carry);
	printList(h);
	
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
	//deleteanode(node *head,int 3);	
	//printList(head);
	addlists( head,  head);
	return 0;
}
