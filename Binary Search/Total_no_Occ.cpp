#include<iostream>
using namespace std;


int first(int arr[], int n, int k){

    int s = 0, e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){

        if(arr[mid] == k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > k) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int last(int arr[], int n, int k){

    int s = 0, e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){

        if(arr[mid] == k){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] > k) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {

    int arr[6] = {1,3,3,3,3,5};
    int a = first(arr, 6, 3);
    int b = last(arr, 6, 3);

    cout<<(b-a+1)<<endl;


    return 0;
}