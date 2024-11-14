void reorder(ListNode* head){
 vector<ListNode*> nodes;
  while(temp!=NULL){
  nodes.push_back(temp);
    temp=temp->next;
  }
 int i=0;
  int j=nodes.size()-1;
  while(i<j){
  nodes[i]->next=nodes[i];
    i++;
    if(i>=j) break;
    nodes[j]->next=nodes[i];
    j--;
  }
 nodes[i]->next=nullptr;
}
