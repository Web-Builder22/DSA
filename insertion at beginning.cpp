// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int v){
        data=v;
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
        newNode->next=head;
        head=newNode;
        
        }
        void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        }
    };
    int main(){
        Linklist l;
        l.insert(10);
        l.insert(20);
        l.insert(30);
        l.insert(40);
        l.display();
    }
    
    

   
