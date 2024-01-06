#include<iostream>
#include<map>
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
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for data "<<value<<endl;
    }
};

// Insertion
void insertNode(Node* &tail, int element, int d) {

    // Empty List
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else {
        // Non-empty list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

// Deletion
void DeleteNode(Node* &tail, int value) {

    // empty list
    if(tail == NULL){
        cout<<" List is empty "<<endl;
        return;
    }
    else {
        // non-empty
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linked list 
        if(curr == prev){
            tail = NULL;
        }

        // >= 2 node linked list
        if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}


void Print(Node* tail){

    Node* temp = tail;
    // empty list
    if(tail == NULL){
        cout<<"Empty list"<<endl;
        return;
    }
    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;

}


bool isCircularList(Node* head){

    if(head == NULL)
        return true;    

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head)
        return true;
    
    return false;
}

bool detectloop(Node* head){

    if(head == NULL)
        return false;
    
    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){

        // cycle present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

// floydDetectLoop

Node* floyd(Node* head){

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }

    return NULL;
}


Node* getStartingNode(Node* head){

    if(head == NULL)
        return NULL;

    Node* intersection = floyd(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}


void removeLoop(Node* head){

    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main() {


    Node* tail = NULL;

    insertNode(tail, 5, 3);
    Print(tail);

    insertNode(tail, 3, 5);
    Print(tail); 

     insertNode(tail, 5, 7);
    Print(tail);

    insertNode(tail, 7, 9);
    Print(tail);

    insertNode(tail, 5, 6);
    Print(tail);

    insertNode(tail, 3, 4);
    Print(tail);

    insertNode(tail, 9, 10);
    Print(tail);


    DeleteNode(tail, 3);
    Print(tail);

    cout<<"\n Starting of Linked List is: "<<getStartingNode(tail)->data<<endl;

    if(floyd(tail)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }


    return 0;
}