#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

Node* inputData() {
    int data;
    cout << "Enter data for the Linked list:" << endl;
    cin >> data;

    Node* head = NULL;
    Node* tail = NULL;

    while (data != -1) {
        Node* n = new Node(data);
        if (head == NULL) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

void printData(Node* head) {
    while (head) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int length(Node* head) {
    int counter = 0;
    while (head) {
        counter++;
        head = head->next;
    }
    return counter;
}

Node* insertNode(Node* head) {
    int counter = 0;
    int i;
    cout << "At what index do you want to insert the element?";
    cin >> i;
    int data;
    cout << "Enter the data:";
    cin >> data;

    Node* newNode = new Node(data);

    if (i == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* current = head;

    while (current) {
        if (counter == i - 1) {
            newNode->next = current->next;
            current->next = newNode;
            break;
        }
        current = current->next;
        counter++;
    }

    return head;
}

Node* insertAtBeg(Node* head) {
    int data;
    cout << "Enter the data for beginning:";
    cin >> data;

    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;

    return head;
}

int main() {
    Node* head = inputData();
    cout << endl;
    printData(head);
    cout << "\n\nThe length of the linked list is: " << length(head) << "\n" << endl;

    head = insertAtBeg(head);

    cout << endl;
    printData(head);
    cout << endl;

    return 0;
}
