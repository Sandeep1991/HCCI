//4.3 Given a sorted array construct a binary tree with minimum height

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct TNode
{
	int data;
	struct TNode* left;
	struct TNode* right;
};

struct TNode * newNode(int data);

//Function to construct the balanced BST
struct TNode * sortedArrayToBST(int arr[], int start, int end)
{
	if(start>end)
		return NULL;
	int mid = (start + end) / 2;
	struct TNode *root = newNode(arr[mid]);
	root->left = sortedArrayToBST(arr, start, mid - 1);
	root->right = sortedArrayToBST(arr, mid+1, end);
	return root;
}

struct TNode * newNode(int data)
{
	struct TNode * node = (struct TNode*) malloc(sizeof(struct TNode*));
	node ->data = data;
	node ->left = NULL;
	node ->right = NULL;
	return node;
}

void preOrder(struct TNode* node)
{
	if(node == NULL)
		return;
	cout<<node->data<<" ";
	preOrder(node->left);
	preOrder(node->right);
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	struct TNode *root = sortedArrayToBST(arr, 0, n-1);
	preOrder(root);
	return 0;
}
