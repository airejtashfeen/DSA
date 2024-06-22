#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        next= NULL;
    }
};

Node* insertAt(){
    int data;
    Node* head = NULL;
    Node* tail = NULL;

    cout<<"Enter data for the circular linked list:";
    cin>>data;

    while(data != -1){
        Node* n = new Node(data);
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        n->next = head;
        cin>>data;
    }

    return head;
}

void printTheLL(Node* head){
    if (head == NULL) {
        cout<<"The linked list is empty."<<endl;
        return;
    }
    Node* temp= head;
    while(temp->next != head){
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<temp->data<<"(last)->";
    cout<<head->data<<"(first)";

    cout<<endl;
}
Node* insertAthead(Node* head){
    int data;
    cout<<"Enter data for the head:";
    cin>>data;
    Node* n= new Node(data);
    if(head==NULL){
        head=n;
        n->next=head;
        return head;
    }
    else{
        n->next= head;
        head=n;
        Node* temp= head;
        while(temp!=head){
            cout<<temp->data<<endl;
            temp= temp->next;
        }
        temp->next=head;
        return head;
    }
}


int main(){
    Node* head = NULL;
    head= insertAt();
    cout<<"\nThe circular linked list is:"<<endl;
    printTheLL(head);
    cout<<endl;
    head= insertAthead(head);
    cout<<endl;
    printTheLL(head);
    return 0;
}
