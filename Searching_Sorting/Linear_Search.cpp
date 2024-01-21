#include<iostream>
using namespace std;

int LinearSearch(int arr[],int key, int n) {
    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[6] = {4, 8, 6, 1, 7, 9};
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;

    cout<<"Index of key is: "<<LinearSearch(arr, key, 6);

    return 0;
}