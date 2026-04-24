// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
    }
};
class singly{
    public:
    Node *head;
    singly(){
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
    void removed(int n){
        int count=0;
        Node *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(n==count){
            Node *tempo=head;
            head=head->next;
            delete tempo;
            return;
        }
        if(n>count||n<=0){
            cout<<"incorrect position"<<endl;
           
            return;
        }
        temp=head;
        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }
        Node *del=temp->next;
        temp->next=temp->next->next;
      delete del;
    }
void display(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
    
};
int main(){
    singly s;
    s.insert(10);
     s.insert(20);
      s.insert(30);
       s.insert(40);
        s.insert(50);
        s.removed(6);
        s.display();
}