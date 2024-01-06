#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    // Constructor 
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this->data;
        while(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for Node "<<value<<endl;
    }

};

// Insertion
void InsertNode(Node* &tail, int elelement, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;        
    }
    else {
        Node* curr = tail;
        while(curr->data != elelement){
            curr =  curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// Deletion
void deleteNode(Node* &tail, int value){

    if(tail == NULL) {
        cout<<"Empty List"<<endl;
        return;
    }
    else {
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node LL
        if(curr == prev)
            tail = NULL;
        
        // 2 node LL
        if(tail == curr)
            tail = prev;

        curr->next = NULL;
        delete curr;
    }
}


// Traversal
void Print(Node* tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"Empty List"<<endl;
        return;
    }
    
    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}



int main() {

    
    Node* tail = NULL;

    InsertNode(tail, 5, 3);
    Print(tail);

    InsertNode(tail, 3, 5);
    Print(tail);

    InsertNode(tail, 5, 7);
    Print(tail);

    InsertNode(tail, 7, 9);
    Print(tail);

    deleteNode(tail, 5);
    Print(tail);


    return 0;
}