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


//Another approach is using sets 

//2.1 Linked list to remove the duplicate items
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
	node* temp = head;
	set<int> myset;
	set<int>::iterator it;
	while(temp!=NULL)
	{
		if(myset.find(temp->data) == myset.end())
		{
			myset.insert(temp->data);
			temp = temp ->next;
		}	
		else
		{
			temp = temp->next;
		}
		//root=NULL;
	}	
	for(set<int>::iterator it=myset.begin();it != myset.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
}


int main()
{
	struct node* head = NULL;
	push(&head,7);
	push(&head,7);
	push(&head,3);
	push(&head,3);
	push(&head,2);
	push(&head,2);
	
	//printList(head);
	removedup(head);	
	//printList(head);
	return 0;
}

