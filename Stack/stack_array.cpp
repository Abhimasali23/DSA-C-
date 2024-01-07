#include<iostream>
using namespace std;


class Stack {

    // Properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void Push(int element) {

        if(size < 0){
            cout<<"Stack Overflow"<<endl;
        }
        else {
            top++;
            arr[top] = element;
        }
    }

    void Pop() {

        if(top >= 0){
            top--;
        }
        else {
            cout<<"Stack Underflow"<<endl;
        }

    }

    int Peek() {
        if(top >= 0 && top < size)
            return arr[top];        
        else {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty() {

        if(top == -1){
            return true;
        }
        else {
            return false;
        }

    }

};



int main()
{

    Stack s(5);

    s.Push(1);
    s.Push(2);    
    s.Push(3);
    s.Push(4);

    cout<<s.Peek()<<endl;

    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();


    cout<<s.Peek()<<endl;

    if(s.isEmpty()){
        cout<<"Empty"<<endl;
    }
    else {
        cout<<"Not Empty"<<endl;
    }



    return 0;
}


/*int arr[5],n=5, top=-1;

void Push(int val) {

    if(top >= n-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else {
        top++;
        arr[top] = val;
    }
}

void Pop() {

    if(top < 0){
        cout<<"Stack Underflow";
        return;
    }
    else {
        cout<<arr[top]<<endl;
        top--;
    }
}

int Peek() {

    if(top>-1 && top<n){
        return arr[top];
    }
    else {
        cout<<"Stack Empty";
        return -1;
    }

}

bool isEmpty() {

    if(top>-1 && top<n){
        return false;
    }
    else {
        return true;
    }

}


int main() {

    Push(1);
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    

    cout<<Peek()<<endl;


    return 0;
}*/























