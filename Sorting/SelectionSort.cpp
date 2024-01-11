#include<iostream>
using namespace std;


void SelectionSort(int arr[], int n){

    for(int i=0;i<n-1;i++){

        int minIndex = i;
        for(int j=i+1;j<n;j++){
            
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}



int main() {


    int arr[5] = {65,25,12,22,11};
    int n = 5;
    SelectionSort(arr, n);
    cout<<"\n Sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}