//4.1 Write a function to check if the tree is balanced

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

int maxDepth(struct node* node)
{
	if(node==NULL)
		return 0;
	else
	{
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);
		if(lDepth>rDepth)
			return (lDepth+1);
		else return (rDepth+1);
	}
}

int minDepth(struct node* node)
{
	if(node==NULL)
		return 0;
	else
	{
		int lDepth = minDepth(node->left);
		int rDepth = minDepth(node->right);
		if(lDepth>rDepth)
			return (rDepth+1);
		else return (lDepth+1);
	}
}

struct node* newNode(int data)
{
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}
bool isBalanced(struct node* head)
{
	return (maxDepth(head)-minDepth(head)<=0);
}
void printTree(struct node* head)
{
	struct node* temp = head;
	queue<node *> q1;
	if(!head) return;
	q1.push(head);
	while(!q1.empty())
	{
		temp = q1.front();
		cout<<temp->data<<" ";
		if(temp->left)
			q1.push(temp->left);
		if(temp->right)
			q1.push(temp->right);
		q1.pop();
	}
	cout<<endl;
}
int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	printTree(root);
	cout<<maxDepth(root)<<endl;
	cout<<minDepth(root)<<endl;
	cout<<std::boolalpha<<isBalanced(root)<<endl;
	return 0;
}
