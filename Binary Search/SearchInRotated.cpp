#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s=0, e=n-1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int BinarySearch(int arr[], int s, int e, int k){

    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k){
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int findPosition(int arr[], int n, int k){

    int pivot = getPivot(arr, n);

    if(k >= arr[pivot] && k <= arr[n-1]){
        return BinarySearch(arr, pivot, n-1, k);
    }
    else {
        return BinarySearch(arr, 0, pivot-1, k);
    }
}

int main() {

    int arr[5] = {7, 9, 1, 2, 3};

    cout<<"Element 2 is at index : "<<findPosition(arr, 5, 2);

    return 0;
}