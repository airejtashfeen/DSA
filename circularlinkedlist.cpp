#include <iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int data){
this->data= data;
next=NULL;
}
};

Node* insertAt(){
int data;
Node* head;
Node* tail;

cout<<"Enter data for the circular linked list:";
cin>>data;

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
    n->next=head;
    cin>>data;
}
return head;
}

void printTheLL(Node* head){
Node* temp= head;
do{
    cout<<temp->data<<"->";
    temp=temp->next;
}while(temp!=head);
cout<<head->data<<"(first)";
}

int main(){
Node* head;
head= insertAt();
cout<<"\nThe circular linked list is:"<<endl;
printTheLL(head);
cout<<endl;
}
