#include<iostream>
using namespace std;

int Min(int arr[], int n) {

    int mini = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] < mini) 
            mini = arr[i];
    }

    return mini;
}


int Max(int arr[], int n) {

    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > maxi) 
            maxi = arr[i];
    }
    return maxi;
}


int main() {

    int arr[100];
    
    int n ;
    cout<<"\n Enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\n Minimum element is : "<<Min(arr, n);
    cout<<"\n Maxmum element is : "<<Max(arr, n);

    return 0;
}