// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node {
    public:
    Node *left,*right;
    int data;
 Node(int val){
     left=right=NULL;
     data=val;
 }
 
};
class Tree{
    public:
    Node* insert(Node *root,int val){
        if(root==NULL){
            return new Node(val);
        }
        if(root->data>val){
            root->left=insert(root->left,val);
        }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
int count=0;
void counts(Node *root){

    if(root==NULL){
        return ;
    }
   
    count++;
   
    counts(root->left);
    counts(root->right);
}
void show(){
    cout<<count<<" nodes are in the tree";
}
};

int main() {
    Tree t;
    Node* root = NULL;

    root = t.insert(root, 50);
    root = t.insert(root, 30);
    root = t.insert(root, 70);
    root = t.insert(root, 20);
    root = t.insert(root, 40);
    root = t.insert(root, 60);
    root = t.insert(root, 80);
t.counts(root);
t.show();
    return 0;
}