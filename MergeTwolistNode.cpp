ListNode* merge(ListNode* a, ListNode*b){
  ListNode* c= new ListNode(100); // ye naki node hai;
  ListNode* temp=c;
  while(a!=nullptr && b!=nullptr){
     if(a->val<b->val){
     temp->next=a;
      a=a->next;
     temp=temp->next;
  }
    else{
      temp->next=b;
      b=b->next;
      temp=temp->next;
    }
}
if(a!=nullptr) temp->next=b;
 else temp->next=a;
  return c->next;
}
