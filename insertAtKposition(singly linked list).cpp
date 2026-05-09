// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node (int val){
        data=val;
        next=NULL;
    }
};
class Singly{
    public:
    Node *head;
    Singly(){
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
    void insertAtPosition(int target,int k){
        Node *newNode =new Node(k);
        newNode->data=k;
        Node *temp=head;
        if(head==NULL){
            cout<<"empty"<<endl;
            return;
        }
        if(target==0){
            newNode->next=head;
            newNode=head;
        }
        for(int i=0;i<target-2;i++){
          
            temp=temp->next;
        }
          newNode->next = temp->next;
        temp->next = newNode;
        temp->next=newNode;
        
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
  
Singly s;
s.insert(10);
s.insert(20);
s.insert(30);
s.insertAtPosition(2,4);
s.display();
}