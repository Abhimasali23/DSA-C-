#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=1;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            if(arr[j] > arr[j+1]) 
                swap(arr[j], arr[j+1]);
        }
    }
}

int main()
{

    int arr[5] = {65, 25, 12, 22, 11};
    int n = 5;
    BubbleSort(arr, n);
    cout << "\n Sorted Array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}