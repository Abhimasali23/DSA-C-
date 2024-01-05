 #include<iostream>
 #include<vector>
 using namespace std;

void intersection(int arr1[], int n, int arr2[], int m){

    vector<int> ans;
    int i=0,j=0;

    while(i < n && j < m){

        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else {
            i++;
        }
    }

    cout<<"\n The intersection of arr1 and arr2 is: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}


 int main() {

    int n,m;
    cin>>n>>m;

    int arr1[10], arr2[10];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    intersection(arr1, n, arr2, m);

    cout<<"\n Done";


    return 0;

}