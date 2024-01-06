#include<iostream> 
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;        
    }

    // Destructor 
    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }

        cout<<"Memory free for "<<value<<endl;

    }
};


// Traversing a linked list
void Print(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<< " " ;
        temp = temp->next;
    }
    cout<<endl;
}

// length of linked list
int getLength(Node* head) {

    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

// Insert At Head
void InsertAtHead(Node* &head, int d){

    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }  
    else {
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    
}

// Insert At Tail/End
void InsertAtTail(Node* &head, int d){
    
    Node* temp =  head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(d);
    temp->next = newNode;
    newNode->prev = temp;
}

// Insert At Given Position
void InsertAtPosition(Node* &head, int position, int d){

    if(position == 1){
        InsertAtHead(head, d);
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    Node* newNode = new Node(d);

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;    
}

// Deletion Code 
void deleteNode(int pos, Node* &head){

    // Deleting first position 
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
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
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main() {

    Node* node1 = new Node(10);
    Node* head  = node1;
    Print(head);

    InsertAtHead(head, 11);
    Print(head);

    InsertAtHead(head, 12);
    Print(head);

    InsertAtTail(head, 15);
    Print(head);

    InsertAtTail(head, 19);
    Print(head);

    //cout<<"Length of Linked List = "<<getLength(head)<<endl;

    InsertAtPosition(head, 3, 25);
    Print(head);

    InsertAtPosition(head, 5, 35);
    Print(head);

    // deleteNode(1, head);
    // Print(head);

    deleteNode(3, head);
    Print(head);

    deleteNode(6, head);
    Print(head);

    return 0;
}