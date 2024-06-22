#include <iostream>
using namespace std;
class Node{
public:
    Node* next;
    int data;

    Node(int data){
    this->data= data;
    next= nullptr;
    }
};

Node* insertAtBeg(Node* head){
int data;
cout<<"\nEnter the data for the beginning:";
cin>>data;

    Node* n= new Node(data);
    n->next=head;
    head=n;
    return head;
}

void printData(Node* head){
while(head){
    cout<<head->data<<"->";
    head= head->next;
}
cout<<"NULL";
cout<<endl;
}
int main(){
    Node n1(20);
    Node n2(30);
    Node n3(40);
    Node *head= &n1;
    n1.next=&n2;
    n2.next=&n3;
    cout<<"Initially the linked list is: \n\n";
    printData(head);

    cout<<"\nNow we enter an element to the beginning \n";
    head=insertAtBeg(head);
    cout<<"\nNow the linked list is: \n \n";
    printData(head);

}

