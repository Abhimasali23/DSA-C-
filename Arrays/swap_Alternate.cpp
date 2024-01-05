#include<iostream>
using namespace std;

void AlternateSwap(int arr[], int n){

    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
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

    AlternateSwap(arr, n);

    cout<<"\n Alternated Swapped Array is:";
    Print(arr, n);   


    return 0;
}