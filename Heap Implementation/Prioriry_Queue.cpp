#include<iostream>
#include<queue>
using namespace std;

int main() {

    // Max Heap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element at Top: "<<pq.top()<<endl;
    pq.pop();

    cout << "Element at Top: " << pq.top() << endl;
    

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> ppq;

    ppq.push(4);
    ppq.push(2);
    ppq.push(5);
    ppq.push(3);

    cout << "Element at Top: " << ppq.top() << endl;
    ppq.pop();

    cout << "Element at Top: " << ppq.top() << endl;
    return 0;
}
