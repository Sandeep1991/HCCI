//2.3 Delete nth node given access to only itself
//Only writing a function in c++

void deleteNthNode(Node *n)
{
  if(n==NULL || n->next == NULL)
    cout<<"False";
  else
    Node *temp = n ->next;
    n->data = temp->data;
    n->next = temp->next;
    cout<<"True";
}

    
    
