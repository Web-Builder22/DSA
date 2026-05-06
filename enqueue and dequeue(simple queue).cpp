// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    public:
    Node *head,*tail;
    queue(){
        head=tail=NULL;
    }
    void enqueue(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    void dequeue(){
        Node *temp=head;
        if(head==NULL){
            cout<<"queue underflow"<<endl;
            return;
        }
        head=head->next;
        delete temp;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"-> ";
            temp=temp->next;
        }
    }
};
int main() {
   queue q;
   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   q.display();
   
    return 0;
}