#include<iostream>
using namespace std;
class Node{
    public:
 int val;
Node* next;
Node(int n){
this->val=n;
  this->next=nullptr;
}
};
void display(Node* head){
    if(head==nullptr) return;
    cout<<head->val<<" ";//kaam
    display(head->next); // cal;
}
void displayrev(Node* head){
    if(head==nullptr) return;
    displayrev(head->next); //cal;
    cout<<head->val<<" ";
}
int main(){
   Node* a=new Node(10);
   Node* b=new Node(20);
   Node* c=new Node(30);
   Node* d=new Node(40);
   a->next=b;
   b->next=c;
   c->next=d;
   display(a);
   displayrev(a);
}
