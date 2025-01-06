#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void  append(Node*& head, int newData){
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main (){
    Node* head = NULL;

    append(head, 10);
    append(head, 20);
    append(head, 30);

    printList(head);

    return 0;
}