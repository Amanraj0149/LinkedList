#include<iostream>
using namespace std;
class Node{      // yaha hum node class banaye hai jo singly linkedlist node ko represent karegi;  
public:
  int val;      // node ka data store hoga;
 Node* next;    //  pointer hai jo next node ki taraf point karega
 Node(int n){   // constructor function hai jo node banate waqt assign karta hai aur next ko nullptr 
 this->val=n;   // set karta hai, kyuki intially kisi bhi node next node set nhi hota.
  this->next=nullptr;
}
};
int main(){
   Node a(10);
  Node b(20);
  Node c(30);
  Node d(40);
  a.next=&b;
  b.next=&c;
  c.next=&d;
  cout<<(a.next)->val<<endl;
  cout<<(b.next)->val<<endl;
  Node* temp=&a;
  while(temp!=nullptr){
    cout<<temp->val<<" ";
    temp=temp->next;
  }
}
