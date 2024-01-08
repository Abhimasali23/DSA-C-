#include<iostream>
using namespace std;


class Node { 

    public:
    int data;
    Node* next;

    // constructor
    Node(int val){
        this->data = val;
        this->next = NULL;
    }       
    
    // destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"\n Memory free done for "<<value<<endl;
    }
};

// Enqueue
void InsertAtTail(Node* &head, int val) {
    
    if(head == NULL){
        Node* node = new Node(val);
        head = node;
    }
    else {
        Node* node = new Node(val);
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node;
        node->next = NULL;
    }
}

// Dequeue
void DeleteStart(Node* &head) {

    if(head == NULL) {
        cout<<"Queue is Empty"<<endl;
    }
    else {
        Node* temp =  head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
}

// Empty
bool empty(Node* head) {

    if(head == NULL){
        return true;
    }
    else {
        return false;
    }
}


// Front
int Front(Node* head) {
    if(head == NULL){
        return -1;
    }
    else {
        Node* temp = head;
        int ans = temp->data; 
        return ans;
    }
}




// Traversal
void Print(Node* head) {

    if(head == NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else {
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}


int main() {

    Node* node = new Node(11);

    Node* head = node;

    InsertAtTail(head,12);
    cout<<"Front element of queue is: "<<Front(head)<<endl;


    InsertAtTail(head,13);
    cout<<"Front element of queue is: "<<Front(head)<<endl;

    InsertAtTail(head,14);
    cout<<"Front element of queue is: "<<Front(head)<<endl;


    InsertAtTail(head,15);
    cout<<"Front element of queue is: "<<Front(head)<<endl;

    Print(head);

    DeleteStart(head);
    cout<<"Front element of queue is: "<<Front(head)<<endl;

    Print(head);

 

    return 0;
}