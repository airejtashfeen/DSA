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

Node* n= new Node(data);
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
return tail;
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


void printTheLL(Node* tail){
cout<<"NULL->";
while(tail){
    cout<<tail->data<<"->";
    tail=tail->prev;
}
cout<<"Data end";
}

int main(){
Node* head;
head=insertTheLinkedList();
cout<<endl;
printTheLL(head);
cout<<"\nNow inserting at the head"<<endl;
Node* head2=insertAthead(head);
printTheLL(head2);
}
