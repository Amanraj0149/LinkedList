ListNode* reverseList(ListNode* head){
 if(head==NULL) return null;
  ListNode* temp=head;
  stack<int>st;
  while(temp!=NULL){
     st.push(temp->val);
    temp=temp->next;
  }
 ListNode* newHead= new ListNode(st.top());
  st.pop();
  ListNode* current= newHead;
  while(st.size()>0){
   ListNode* newNode=new ListNode(st.top());
    st.pop();
    current->next=newNode;
    current=current->next;
  }
  return newHead;
}
