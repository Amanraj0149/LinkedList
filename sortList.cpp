ListNode* merge(ListNode* a, ListNode* b){
ListNode* d= new ListNode(100);
ListNode* temp=d;
while(a!=NULL && b!=nullptr){
if(a->val < b->val){
  temp->next=a;
  a=a->next;
}
  else{
    temp->next-b;
    b=b->next;
    temp=temp->next;
}
if(a!=NULL) temp->next=b;
  temp->next=a;
  return d->next;
}

ListNode* sortList(ListNode* head){
 if(head==nullptr && head->next==NULL){
 return head;
}
ListNode* slow=head;
ListNode* fast=head;
while(fast->next!=nullptr && fast->next->next!=NULL){
  slow =slow->next;
  fast=fast->next->next;
}
  ListNode* a= head;
  ListNode* b= slow->next;
  slow->next=nullptr;
  a=sortList(a);
  b=sortList(b);
  ListNode* c= merge(a,b);
  return c;
}
