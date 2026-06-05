// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
   Node *next;
   Node(int val){
       data=val;
   }
   
};
class Queue{
    
    Node *front;
    Node *rear;
    public:
    Queue(){
        front=rear=NULL;
    }
    void enqueue(int val){
            Node *newNode=new Node(val);
            if(front==NULL){
                front=rear=newNode;
                return;
            }
            rear->next=newNode;
            rear=newNode;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"queue is underflow"<<endl;
            return;
        }
        Node *temp=front;
        front=front->next;
        delete temp;
    }
    void peek(){
        if(front==NULL){
            cout<<"QUEUE is empty"<<endl;
            return;
        }
        cout<<"front:"<<front->data<<endl;
    }

void display(){
    Node *temp=front;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
};
int main() {
    Queue q;
    q. enqueue(10);
    q. enqueue(20);
    q. enqueue(30);
    q. enqueue(40);
       q.display();
       q.peek();
       q.dequeue();
         q.display();
       q.peek();
       q.dequeue();
         q.display();
       q.peek();
       q.dequeue();
}