#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class BST {
public:

    Node* insert(Node* root, int val) {
        if (root == NULL)
            return new Node(val);

        if (val < root->data)
            root->left = insert(root->left, val);
        else
            root->right = insert(root->right, val);

        return root;
    }
    int max(int a,int b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }
   int height(Node *root){
       if(root==NULL){
           return 0;
       }
   int  left_count=  height(root->left);
      
      
    int  right_count=height(root->right);
     
return 1+max(left_count,right_count);

}
};

int main() {

    BST tree;
    Node* root = NULL;

    int arr[] = {50,30,70,20,40,60,80};

    for(int i=0;i<7;i++)
        root = tree.insert(root, arr[i]);
        
       int a= tree.height(root);
       cout<<"height of tree is: "<<a;
        
}

