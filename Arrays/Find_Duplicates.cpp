#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> FindDups(int arr[], int n){

    sort(arr.begin(), arr.end());
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            ans.push_back(arr[i]);
        }
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


    vector<int> Dups = FindDups(arr, n);

    cout<<"\n Duplicate elements are: ";
    for(int i=0;i<Dups.size();i++){
        cout<<Dups[i]<<" ";
    }

    
    return 0;

}