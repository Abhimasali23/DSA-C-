#include<iostream>
using namespace std;


class Node {

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }    

    // Destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data node "<<value<<endl;
    }
};

// Insert At Head
void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}


// Insert At Tail
void insertAtTail(Node* &head, int d){

    Node* temp = head;
    Node* New = new Node(d);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = New;
    New->next = NULL;

}

// Insert At Given Position
void insertAtPosition(Node* &head, int position, int d){

    if(position == 1){
        insertAtHead(head, d);
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1)  {
        temp = temp->next;
        cnt++;
    }
    Node* New = new Node(d);
    New->next = temp->next;
    temp->next = New;
}


// Printing Linked List
void Print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


// Deletion Code 
void deleteNode(int pos, Node* &head){

    // Deleting first position 
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else {
        // deleting middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}



int main() {

    Node* node1 = new Node(10);

    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // head pointed to node1
    Node* head = node1;

    insertAtHead(head, 12);
    Print(head);

    insertAtHead(head, 15);
    Print(head);

    insertAtTail(head, 5);
    Print(head);

    insertAtTail(head, 25);
    Print(head);

    insertAtPosition(head,3,22);
    Print(head);

    insertAtHead(head, 11);
    Print(head); 

    deleteNode(3,head);
    Print(head);
    
    deleteNode(1,head);
    Print(head);




    return 0;
}