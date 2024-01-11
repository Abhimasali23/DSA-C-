#include<iostream>
using namespace std;


void BubbleSort(int arr[], int n){

    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){

            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
                swapped = true;
        }
        if(swapped == false){
            break;
        }
    }
}



int main() {

    int n = 6;
    int arr[n] = {10,1,7,6,14,9};
    
    BubbleSort(arr, n);
    cout<<"Sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}