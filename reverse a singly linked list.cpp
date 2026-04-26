// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node (int val){
        data=val;
    }
};
class Linklist{
    public:
    Node *head;
    Linklist(){
        head=NULL;
    }
    void insert(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void reverse(){
        Node *prev=NULL;
        Node *curr=head;
        Node *next=NULL;
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
prev = curr;         // prev aage badhao
        curr = next; 
        }
        head=prev;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
};
int main() {
  Linklist l;
  l.insert(10);
  l.insert(20);
  l.insert(30);
  l.reverse();
  l.display();
    return 0;
}