#include<iostream>
using namespace std;

int FindUniq(int arr[], int n){

    int ans;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int arr[50];

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\n Unique Element is: "<<FindUniq(arr,n);

    return 0;

}