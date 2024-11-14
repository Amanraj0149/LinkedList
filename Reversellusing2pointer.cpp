ListNode* reverseList(ListNode* head){
ListNode* curr=head;
ListNode* next=head;
  ListNode* prev=nullptr;
  while(curr!=nullptr){   // ncpcn
   next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  return prev;
}
