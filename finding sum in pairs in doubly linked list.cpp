// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next,*prev;
    Node (int val){
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
        head->prev =newNode;
        head=newNode;
    }
    void FindSum(int val){
        Node *temp=head;
        bool found=false;
        while(temp!=NULL){
         Node *tempo=temp->next;
         while(tempo!=NULL){
             if(temp->data+tempo->data==val){
                 cout<<temp->data<<", "<<tempo->data<<endl;
                 found=true;
             }
             tempo=tempo->next;
             
             
         }
         temp=temp->next;
        }
    
    if(!found){
        cout<<"sum nahi mila";
    }
    }
};
int main() {
  doubly d;
  d.insert(9);
  d.insert(8);
  d.insert(6);
  d.insert(5);
  d.insert(4);
  d.insert(2);
  d.insert(1);
  d.FindSum(7);

    return 0;
}