#include<iostream>
using namespace std;


void SelectionSort(int arr[], int n){

    for(int i=1;i<n;i++) {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0)
        {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        
    } 
}



int main() {

    int n = 7;
    int arr[n] = {10,1,7,4,8,2,11};

    SelectionSort(arr, n);
    cout<<"Sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}