#include <iostream>
using namespace std;

//================ Tree Node ===================
class TreeNode {
public:
    int data;
    TreeNode *left, *right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

//================ Queue Node ==================
class Node {
public:
    TreeNode *data;
    Node *next;

    Node(TreeNode *val) {
        data = val;
        next = NULL;
    }
};

//================ Queue =======================
class Queue {
public:
    Node *head, *tail;

    Queue() {
        head = tail = NULL;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void enqueue(TreeNode *val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    TreeNode* dequeue() {
        if (head == NULL)
            return NULL;

        Node *temp = head;
        TreeNode *value = temp->data;

        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete temp;

        return value;
    }
};

//============== Level Order ===================
void levelOrder(TreeNode *root) {

    if (root == NULL)
        return;

    Queue q;

    q.enqueue(root);

    while (!q.isEmpty()) {

        TreeNode *current = q.dequeue();

        cout << current->data << " ";

        if (current->left != NULL)
            q.enqueue(current->left);

        if (current->right != NULL)
            q.enqueue(current->right);
    }
}

//================ Main ========================
int main() {

    TreeNode *root = new TreeNode(10);

    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);

    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);

    cout << "Level Order Traversal: ";
    levelOrder(root);

    return 0;
}