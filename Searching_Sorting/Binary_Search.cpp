#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key, int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
    
}

int main()
{

    int arr[6] = {1, 2, 4, 8, 9, 10};
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    cout << "Index of key is: " << BinarySearch(arr, key, 6);

    return 0;
}