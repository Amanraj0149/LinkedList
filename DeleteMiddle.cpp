ListNode* deleteMiddle(ListNode* head){
if(!head || !head->next) return nullptr;
  ListNode* temp=head;
  int size=0;
  while(temp!=null){
   temp=temp->next;
    size++;
  }
  int middle=size/2;
  temp=head;
  for(int i=1;i<middle;i++){
    temp=temp->next;
}
temp->next=temp->next->next;
return head;
}
