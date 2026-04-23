// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *prev,*next;
    Node(int val){
        data=val;
        prev=next=NULL;
    }
};
class doubly{
    public:
    Node *head,*tail;
    doubly(){
        head=tail=NULL;
    }
    void insertAtBegin(int val){
        
        Node *newNode =new Node(val);
         if(head==NULL){
        head=tail=newNode;
        return;
    }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp=temp->next;
        }
    }
    void insertAtEnd(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
            newNode->prev=temp;
            tail=newNode;
        }
    }
};
int main(){
    doubly l;
    l.insertAtBegin(1);
   l.insertAtBegin(2);
    l.insertAtEnd(3);
    l.insertAtEnd(4);
    l.display();
}