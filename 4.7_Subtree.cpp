//4.7 Is tree a subtree of another tree
//Complexity is O(nm)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* left, *right;
};

bool areIdentical(struct node* root1, struct node* root2)
{
	if(root1 == NULL && root2 == NULL)
		return true;
	if(root1 == NULL || root2 == NULL)
		return false;
	return(root1->data == root2->data && areIdentical(root1->left,root2->left)
	&& areIdentical(root1->right,root2->right));
}

bool isSubtree(struct node *T, struct node* S)
{
	if(S == NULL)
		return true;
	if(T == NULL)
		return false;
	if(areIdentical(T,S))
		return true;
	return isSubtree(T->left,S) || isSubtree(T->right,S);
}

//Helper function
struct node* newNode(int data)
{
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

int main()
{
	struct node* T = newNode(26);
	T->left = newNode(10);
	T->right = newNode(3);
	T->left->left = newNode(4);
	T->left->right = newNode(6);
	T->left->left->right = newNode(30);
	T->right->right = newNode(3);
	
	struct node* S = newNode(10);
	S->left = newNode(4);
	S->right = newNode(6);
	S->left->right = newNode(30);
	
	if(isSubtree(T,S))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
