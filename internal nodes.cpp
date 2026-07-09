// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
class Tree{
    public:
    int count=0;
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
    void internal(Node *root){
        if(root==NULL){
            return;
        }
        if(root->left!=NULL||root->right!=NULL){
        count++;
    }
    internal(root->left);
    internal(root->right);
    }
    void show(){
        cout<<count<<" internal nodes are here in bst"<<endl;
    }
};
int main() {
    Tree t;
    Node* root = NULL;

    root = t.insert(root, 10);
    root = t.insert(root, 5);
    root = t.insert(root, 15);
    root = t.insert(root, 2);
    root = t.insert(root, 7);
    root = t.insert(root, 12);
    root = t.insert(root, 20);

  t.internal(root);
  t.show();

    return 0;
}


    
