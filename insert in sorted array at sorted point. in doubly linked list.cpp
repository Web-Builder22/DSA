// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};
class doubly{
    public:
    Node *head;
    doubly(){
        head=NULL;
    }
    void insert(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    
            
        void insertAtSort(int val){
    Node* newNode = new Node(val);

    // empty list
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    // insert at beginning
    if(val < head->data){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    // find position
    while(temp->next != NULL && temp->next->data < val){
        temp = temp->next;
    }

    // insert in middle or end
    newNode->next = temp->next;
    if(temp->next != NULL){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
        
    };

int main() {
   doubly d;
   d.insert(30);
   d.insert(20);
   d.insert(10);
   d.insertAtSort(25);
d.display();
    
}