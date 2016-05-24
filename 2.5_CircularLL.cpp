//2.5 Circular linked list Implement an algorithm which returns node at beginning of loop.
void FindBeginning(struct node* head)
{
  node *n1 = head;
  node *n2 = head;
  while(n2->next!=NULL)
  {
    n1 = n1->next;
    n2 = n2->next->next;
    if(n1==n2)
      break;
  }
  if(n2->next == NULL)
    return NULL;
  n1 = head;
  while(n1 != n2)
  {
    n1 = n1->next;
    n2 = n2->next;
  }
  return n2;
}
    
