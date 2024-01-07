#include<iostream>
#include<stack>
using namespace std;


int main() {

    // creation of stack    
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;


    if(s.empty()){
        cout<<"Empty"<<endl;
    }
    else {
        cout<<"Not Empty"<<endl;
    }





    return 0;
}