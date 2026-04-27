#include<iostream>
using namespace std;

class Node{
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
     void insert(int val){      //insert at beginning
         Node *newNode =new Node(val);
         if(head==NULL){
             head=newNode;
             return;
         }
         newNode->next=head;
         head=newNode;
     }
     void reorderList(){
         int count=0;
         Node *temp=head;
         while(temp!=NULL){
             count++;
             temp=temp->next;
         }
         temp=head;
         for(int i=0;i<count/2;i++){
             temp=temp->next;
         }
         Node *prev=NULL;
         Node *next=NULL;
         Node *curr=temp->next;
         temp->next=NULL;
         while(curr!=NULL){
             next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
         }
         Node *first=head;
         Node *second=prev;
     while(second!=NULL){
         Node *temp1=first->next;
         Node *temp2=second->next;
         first->next=second;
         second->next=temp1;
         first=temp1;
         second=temp2;
         
     }
  

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
     Linklist l;
     l.insert(5);
      l.insert(4);
       l.insert(3);
        l.insert(2);
         l.insert(1);
       l.reorderList();
       l.display();
 }
 