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
};


void Push(Node* &head, int d){

    Node* temp;
    if(temp = NULL){
        cout<<"Stack is empty"<<endl;
    }
    else {
        
    }

}

void Pop(Node* &head) {


}

int Peek(Node* &head) {
    
    if(head == NULL)
        return -1;

    return head->data;
}










int main() {





    return 0;
}