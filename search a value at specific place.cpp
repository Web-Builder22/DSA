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
class Linklist{
    public:
    Node *head;
    Linklist(){
        head=NULL;
    }
    int count=0;
    void insert(int val){
        Node *newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        
        }
       void display(){
           Node *temp=head;
           while(temp!=NULL){
               count++;
               cout<<temp->data<<"->";
               temp=temp->next;
               
           }
           cout<<"Total nodes are "<<count<<endl;
       }
       bool search(int key){
           Node *temp=head;
           while(temp!=NULL){
               if(temp->data==key){
                   return true;
               }
              
               else{
                   return false;
               }
           }
       }
        
    };
    int main(){
        Linklist l;
        l.insert(10);
        l.insert(20);
        l.insert(30);
        l.display();
    
     if(l.search(40)==true){
         cout<<"key is found in Node";
     }
     else{
         cout<<"key is not found unfortunately";
     }
    }
    
