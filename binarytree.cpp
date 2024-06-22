#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insertNode(Node* root, int data) {
    if (root == NULL) {
        return new Node(data); 
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data); 
    } else {
        root->right = insertNode(root->right, data); 
    }

    return root; 
}

void inorderTraversal(Node* root) {

    if (root != NULL) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root) {

    if (root != NULL) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root) {

    if (root != NULL) {
        postorderTraversal(root->right);
        postorderTraversal(root->left);
        cout << root->data << " ";
    }
}


int main() {
    Node* root = NULL;
    int data;

    cout<<"Enter value for the tree:";
    while(data!=-1){
        cin>>data;
        if(data==-1){
            break;
        }
        root=insertNode(root,data);
    }

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout<<endl;
    
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout<<endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout<<endl;

}