#include<iostream> 
using namespace std;

class Node {

    int data;
    Node* next;
    Node* arb;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->arb = NULL;
    }
};

int main() {



    return 0;
}


void insertAtTail(Node* &head, Node* &tail, int d){

    Node* newNode = new Node(d);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

Node* copyList(Node* head) {

    // step 1 : create a clone list

    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }


    // step 2 : cloneNode add in between original list
    Node* originalNode = head;
    Node* cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL) {
        Node* next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        clone->next = originalNode;
        cloneNode = next;        
    }

    // step 3 : random pointer copy
    Node* temp = head;

    while(temp != NULL){
        if(temp->next != NULL){
            temp -> next -> arb = temp -> arb? temp -> arb -> next : temp -> arb;            
        }
        temp = temp -> next -> next;
    }


    // step 4 : revert changes done in step 2

    originalNode = head;
    cloneNode = cloneHead;

    while(originalNode != NULL && cloneNode != NULL) {
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if(originalNode != NULL) {
            cloneNode -> next = originalNode -> next; 
        }
        cloneNode = cloneNode -> next;
    }

    // step 5 : return ans;

    return cloneHead;



}















