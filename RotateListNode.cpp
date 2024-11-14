ListNode* rotate(ListNode* head){
ListNode* temp=head;
  while(temp->next->next!=nullptr){
    temp=temp->next; }
 // ab hum 4th node pe hai , 5 wala ko head pe dalenge next karke; aur 4th ka next null; 5th wala ko head bana denge;
  ListNode* lastnode=temp->next;
  temp->next=null;
  lastnode->next=head;
  head=lastnode;
  return head;
}
ListNode* rotateRight(ListNode* head, int k) {
if(head==null || head->next=nullptr  || k=0){
return head;
}
int n=0;
  ListNode* temp=head;
  while(temp!=null){
   temp=temp->next;
    n++;
  }
  k=k%n;
  while(k--){
  head= rotate(head);
  }
return head;
}
