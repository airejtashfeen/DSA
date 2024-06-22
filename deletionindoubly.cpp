#include <iostream>
using namespace std;
class Node{
public:
    Node* next;
    Node* prev;
    int data;

Node(int data){
this->data=data;
prev=nullptr;
next=nullptr;
}
};

Node* insertTheLinkedList(){
Node* head;
Node* tail;
int data;
cout<<"Insert data for the linked list (-1 to stop):";
cin>>data;

while(data!=-1){
Node* n= new Node(data);
if(head==NULL){
head=n;
tail=n;
}
else{
 tail->next=n;
 n->prev=tail;
 tail=n;
}
cin>>data;
}
return head;
}

Node* insertAthead(Node* head){
int data;
cout<<"\nEnter data for the head:";
cin>>data;
Node* n= new Node(data);

n->next= head;
head->prev=n;
head=n;

return head;
}

Node* deleteAtNode(Node* head, int index){
Node* temp= head;
for(int i=0; i<index; i++){
    temp=temp->next;
}
temp->prev->next= temp->next;
temp->next->prev= temp->prev;
return head;
}

void printTheLL(Node* head){
while(head){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<"NULL";
}

int main(){
Node* head;
head=insertTheLinkedList();
cout<<endl;
printTheLL(head);
cout<<"\nNow inserting at the head"<<endl;
head=insertAthead(head);
printTheLL(head);
int index;
cout<<"\nEnter index of node to be deleted:";
cin>>index;
head=deleteAtNode(head, index);
cout<<"\nNow deleting at "<<index<<endl;
printTheLL(head);
}
