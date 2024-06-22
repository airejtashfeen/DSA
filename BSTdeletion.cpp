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

class BST{
public:
Node* root;

BST(){
root=NULL;
}

Node* findMin(Node* root){
while(root->left!=NULL){
    root= root->left;
}
return root;
}

Node* insertBST(Node* root, int value){
if(root==NULL){
    return new Node(value);
}
else if(value < root->data){
    root->left= insertBST(root->left, value);
}
else if(value > root->data){
    root->right= insertBST(root->right, value);
}
return root;
}

Node* deleteNode(Node* root, int key){
if(root==NULL){
    cout<<"No node to be deleted";
    return root;
}
else if(key< root->data){
    root->left= deleteNode(root->left, key);
}
else if(key> root->data){
    root->right= deleteNode(root->right, key);
}
else{
    //Case 1, leaf node
    if(root->left== NULL){
        Node* temp= root->left;
        delete root;
        return temp;
    }
    else if(root->right== NULL){
        Node* temp= root->left;
        delete root;
        return temp;
    }
   Node* successor= findMin(root->right);
   swap( root->data, successor->data);
   root->right= deleteNode(root->right, successor->data);
}
return root;
}
void inorderTraversal(Node* root){
if(root==NULL){
    return;
}
inorderTraversal(root->left);
cout<<root->data<<" ";
inorderTraversal(root->right);
}
};

int main(){
BST bst;
int Size, data, key;
cout<<"How many values do u wanna enter in the tree?:";
cin>>Size;
for(int i=0; i<Size; i++){
    cin>>data;
    bst.root= bst.insertBST(bst.root, data);
}
cout<<"\nThe BST is:"<<endl;
bst.inorderTraversal(bst.root);
cout<<"\nEnter key to be deleted:";
cin>>key;
bst.deleteNode(bst.root, key);
cout<<"The BST after deletion of "<<key<<" is:"<<endl;
bst.inorderTraversal(bst.root);

}
