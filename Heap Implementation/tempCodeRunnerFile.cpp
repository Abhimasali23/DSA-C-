int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i=n/2;i>0;i--) {
        heapify(arr, n, i);
    }
    cout<<"\n Priting the heapified array"<<endl;
    for(int i=1;i<=n;i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;