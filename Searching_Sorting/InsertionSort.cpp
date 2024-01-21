#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{

    for(int i=1;i<n;i++) {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0) {
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

void Print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5];
    cout << "Enter the array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Before Sorting " << endl;
    Print(arr, 5);

    InsertionSort(arr, 5);

    cout << "After Sorting " << endl;
    Print(arr, 5);

    return 0;
}