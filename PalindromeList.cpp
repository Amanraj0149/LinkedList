bool isPalindrome(ListNode* head){
 if(head==nullptr || head->next==nullptr) return true;
  ListNode* temp=head;
  string s;
  while(temp!=NULL){
   s+=to_string(temp->val);
    temp=temp->next;
  }
  int i=0;
  int j=s.size()-1;
  while(i<j){
  if(s[i]!=s[j]) return false;
    i++;
    j--;
  }
  return true;
}
