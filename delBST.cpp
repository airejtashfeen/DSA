#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
    this->data= data;
    left= NULL;
    right= NULL;
    }
};

Node* findMin(Node* root){
while(root->left!=NULL){
    root= root->left;
}
return root;
}

Node* deleteNode(Node* root, int key){
if(root==NULL){
    cout<<"No Node to be deleted!";
    return root;
}

else if(key< root->data){
    deleteNode(root->left, key);
}
else if(key > root->data){
    deleteNode(root->right, key);
}
else{
    //Key found
    //Case 1, no child or leaf node
    if(root->left==nullptr){
        Node* temp= root->left;
        delete root;
        return temp;
    }
    else if(root->right==nullptr){
        Node* temp= root->right;
        delete root;
        return temp;
    }
    //Case 2, node has 2 children
    Node* successor = findMin(root->right);
    swap(root->data,successor->data);
    root->right=deleteNode(root->right, successor->data);
}
return root;
}
void inorderTraversal(Node* root){
if(root!=NULL){
inorderTraversal(root->left);
cout<<root->data<<" ";
inorderTraversal(root->right);
}}

int main(){
int key;
Node* root= new Node(10);
root->left= new Node(5);
root->right= new Node(12);
root->left->left= new Node(4);
root->left->right= new Node(8);
root->right->right= new Node(14);
root->right->left= new Node(11);
inorderTraversal(root);

cout<<"\nEnter the key to be deleted:";
cin>>key;

deleteNode(root, key);
cout<<"\nThe tree after deleting the key is:\n";
inorderTraversal(root);
}
