//4.5_InOrder successor of BST
//Time complexity is O(h) where h is the height of the tree.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;
	struct node* parent;
};

struct node* minValue(struct node* node);

struct node* inOrderSuccessor(struct node *root, struct node *n)
{
	//If the right child is not null then go to the next right node
	if(n->right != NULL)
		return minValue(n->right);
	
	//Now find the lowest value on the left branch with the min value
	struct node* p = n->parent;
	while(p!= NULL && n==p->right)
	{
		n= p;
		p = p->parent;
	}
	return p;
}

//The below function returns the left most in our case minimum value in the BST
struct node* minValue(struct node* node)
{
	struct node* current = node;
	while(current->left != NULL)
	{
		current = current->left;
	}
	return current;
}

struct node* newNode(int data)
{
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return node;
}

struct node* insert(struct node* node, int data)
{
	if(node==NULL)
		return(newNode(data));
	else
	{
		struct node *temp;
		if(data <= node->data)
		{
			temp = insert(node->left,data);
			node->left = temp;
			temp->parent = node;
		}
		else
		{
			temp = insert(node->right,data);
			node->right = temp;
			temp->parent = node;
		}
		return node;
	}
}

int main()
{
	struct node* root = NULL, *temp, *succ, *min;
	root = insert(root,20);
	root = insert(root, 8);
	root = insert(root, 22);
  	root = insert(root, 4);
  	root = insert(root, 12);
  	root = insert(root, 10);  
  	root = insert(root, 14);    
  	temp = root->left->right->right;
 
  succ =  inOrderSuccessor(root, temp);
  if(succ !=  NULL)
    cout<<"Inorder Successor of "<<temp->data<<" is "<<succ->data<<endl;    
  else
    cout<<"Inorder Successor doesn't exit"<<endl;
 
  return 0;
}
