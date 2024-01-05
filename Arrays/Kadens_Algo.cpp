#include<iostream>
using namespace std;

int main() {

    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};

    int maxi = INT_MIN;
    int sum = 0;

    int ansStart = -1;
    int ansEnd = -1;
    int start = -1;
    for (int i = 0; i < 9; i++)
    {
        if(sum == 0) {
            start = i;
        }
        sum += arr[i];

        if(sum > maxi) {
            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }

    for(int i=ansStart;i<=ansEnd;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}