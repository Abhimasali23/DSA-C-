#include<iostream>
using namespace std;

class Queue {

    public:
    int* arr;
    int front;
    int rear;
    int size;

    
    // Constructor
    Queue() {
        size = 100;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void Enqueue(int val) {
        if(rear == size-1){
            cout<<"Queue is Full"<<endl;
        }
        else {
            arr[rear] = val;
            rear++;
        }
    }

    int Dequeue() {
        if(front == rear) {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else {
            int ans = arr[front];
            front++;
            if(front == rear) {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool empty() {
        if(front == rear){
            return true;
        }
        else {
            return false;
        }
    }

    int Front() {
        if(front == rear){
            return -1;
        }
        else {
            return arr[front];
        }
    }

    void Display() {
        for(int i=0;i<rear;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main() {

    Queue q;

    q.Enqueue(5);
    cout<<"Front of Queue is: "<<q.Front()<<endl;

    q.Enqueue(6);
    cout<<"Front of Queue is: "<<q.Front()<<endl;

    q.Enqueue(7);
    cout<<"Front of Queue is: "<<q.Front()<<endl;

    q.Enqueue(8);
    cout<<"Front of Queue is: "<<q.Front()<<endl;
    
    q.Display();

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    // q.Dequeue();

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else {
        cout<<"Queue is not empty"<<endl;
    }

    
    return 0;
}