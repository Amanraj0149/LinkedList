// Online C++ compiler to run C++ program online
#include <iostream>
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
class ll{
    public:
    Node* head;
    Node* tail;
    int size;
    ll(){
        head=tail=nullptr;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) {
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    
    void insertAthead(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
            else{
                temp->next=head;
                head=temp;
            }
        }
        size++;
    }
    
    void display(Node* head){
        Node* temp=head;
     while(temp!=nullptr){
         cout<< temp->val<<" ";
        temp=temp->next;
     }
     cout<< endl << "Size"<< size<<endl;
    }
};


int main() {
    ll LL;
    LL.insertAtEnd(10);
    LL.display();
    LL.insertAtEnd(20);
    LL.display();
    LL.insertAtEnd(30);
    LL.display();
    
    std::cout << "Try programiz.pro";

    return 0;
}
