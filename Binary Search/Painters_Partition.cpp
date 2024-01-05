#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){

    int P = 1;
    int B = 0;

    for(int i=0;i<n;i++){

        if(B + arr[i] <= mid){
            B += arr[i];
        }
        else {

            P++;
            if(P > m || arr[i] > mid){
                return false;
            }
            B = arr[i];
        }
    }
    return true;
}




int paintP(int arr[], int n, int k){

    int s = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
    }
   
    int e = sum; 
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){

        if(isPossible(arr, n, k, mid)){
            ans = mid;
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

    int arr[5] = {5, 5, 5, 5};

    int k = 2;

    cout<<paintP(arr, 5, k)<<endl;
    return 0;
}