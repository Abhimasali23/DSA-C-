#include<iostream>
using namespace std;

int main() {

    int arr[5] = {100, 200, 300, 400, 500};
    int n = 5;
    int k = 3;

    // Brute Force Approch

    /*int max_sum = INT_MIN;

    for(int i=0;i<n-k+1;i++) {
        int curr_sum = 0;
        for(int j=0;j<k;j++) {
            curr_sum += arr[i+j];
        }
        max_sum = max(curr_sum, max_sum);
    }

    cout<<max_sum<<endl;*/


    // Sliding window Approch

    if(n < k) {
        cout<<"Invalid"<<endl;
    }

    int max_sum = 0;

    for(int i=0;i<k;i++) 
        max_sum += arr[i];
    
    int window_sum = max_sum;

    for(int i=k;i<n;i++) {
        window_sum += arr[i] - arr[i-k];
        max_sum = max(max_sum, window_sum);
    }

    cout<<max_sum<<endl;

    return 0;
}