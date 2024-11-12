Node  RemoveDuplicate(Node* head){
  unordered_set<int> st;
Node* curr=head;
Node* prev=nullptr;
  while(curr!=NULL){ 
     if(st.find(curr->data)!=st.end()){ // duplicate remove kardo;
       prev->next=curr->next;
       delete curr;
     }
    else{
         st.insert(curr->data); 
       prev=curr;
    }
  }
  curr=prev->next;
 return head;
}
