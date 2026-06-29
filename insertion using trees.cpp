#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

class Tree{
public:
    Node* insert(Node *root, int val){

        if(root == NULL){
            return new Node(val);
        }

        if(val < root->data){
            root->left = insert(root->left, val);
        }
        else{
            root->right = insert(root->right, val);
        }

        return root;
    }
};

int main(){

    Tree t;

    Node *root = NULL;

    root = t.insert(root,5);
    root = t.insert(root,6);
    root = t.insert(root,7);
    root = t.insert(root,8);

    return 0;
}