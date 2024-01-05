#include<iostream>
using namespace std;

void Reverse(int arr[], int n){

    int s = 0;
    int e = n-1;

    while(s <= e){

        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void Print(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[100];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\n Array is:";
    Print(arr, n);

    Reverse(arr, n);

    cout<<"\n Reversed Array is:";
    Print(arr, n);   


    return 0;
}