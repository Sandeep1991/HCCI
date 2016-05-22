//2.1 Linked list - remove the duplicate node
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
void removedup(node* head)
{
	
	node* previous = head;
	node* current =previous;
	while(current != NULL)
	{
		node* runner =  head;
		while(runner != current)
		{
			if(runner->data == current->data)
			{
				node *tmp = current->next;
				previous->next = tmp;
				current = tmp;
				break;
			}
			runner = runner->next;
		}
		if(runner == current)
		{
			previous = current;
			current = current->next;
		}
	}
	
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
	push(&head,7);
	push(&head,3);
	push(&head,2);
	push(&head,2);
	
	printList(head);
	removedup(head);	
	printList(head);
	return 0;
}
