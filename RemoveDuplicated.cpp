ListNode removeduplicate(ListNode* head){
ListNode* a=head;
ListNode* b=head->next;
  while(b!=NULL){
    while(b!=NULL && b->val==a->val){
  b=b->next;
    }
    a->next=b;
    a=b;
  if(b!=NULL){
    b=b->next;
  }
}
