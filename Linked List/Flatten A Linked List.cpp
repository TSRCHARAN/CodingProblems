Node* merge(Node* head1, Node* head2)
{
   if(head1 == NULL){
       return head2;
   }

   if(head2 == NULL){
       return head1;
   }

   Node* temp1 = head1;
   Node* temp2 = head2;

   Node* dummy = new Node(-1);

   Node* tempdummy = dummy;

   while(temp1 != NULL && temp2 != NULL){

       if(temp1->data <= temp2->data){
           tempdummy->bottom = temp1;
           tempdummy = temp1;
           temp1 = temp1->bottom;
       }
       else{
           tempdummy -> bottom = temp2;
           tempdummy = temp2;
           temp2 = temp2 -> bottom;
       }
   }

   while(temp1 != NULL){
       tempdummy->bottom = temp1;
       tempdummy = temp1;
       temp1 = temp1->bottom;

   }

   while(temp2 != NULL){

       tempdummy->bottom = temp2;
       tempdummy = temp2;
       temp2 = temp2->bottom;

   }

   // delete dummy node

   Node* head = dummy->bottom;
   dummy->bottom = NULL;
   delete dummy;

   return head;
}

Node *flatten(Node *root)
{
  // Your code here

  if(root == NULL || root->next == NULL){
      return root;
  }

  Node* ans = flatten(root->next);
  root->next = ans;

  root = merge(root,root->next);

  return root;

}
