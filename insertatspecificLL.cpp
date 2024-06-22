#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
Node(int data){
this->data=data;
next= NULL;
}
};

Node* inputData(){
int data;
cout<<"Enter data for the Linked list:"<<endl;
cin>>data;

Node* head= NULL;
Node* tail= NULL;

while(data!=-1){
    Node* n= new Node(data);

    if(head==NULL){
        head=n;
        tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
    cin>>data;
}
return head;
}

void printData(Node* head){
while(head){
    cout<<head->data<<"->";
    head= head->next;
}
cout<<"NULL";
}

Node* insertAtIndex(Node* head){
int index, data;
cout<<"\nEnter the index to insert at:";
cin>>index;

cout<<"Enter the data for the node:";
cin>>data;

Node* n= new Node(data);

if(index==0){
    n->next= head;
    head=n;
    return head;
}
Node* temp= head;
for(int i=0; i<index-1; i++){
    if(temp==NULL){
        cout<<"\nIndex out of range!";
        return head;
           }
        temp= temp->next;
}
n->next = temp -> next;
temp->next=n;
return head;
}
int main(){
Node* head;
head=inputData();
printData(head);

head=insertAtIndex(head);
cout<<endl;
printData(head);
}
