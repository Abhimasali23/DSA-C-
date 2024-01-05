#include<iostream>
using namespace std;

// second variation 
int ncr(int n, int r) {

    int res = 1;
    for(int i=0;i<r;i++) {
        res = res*(n-i);
        res = res/(i+1);
    }

    return res;
}

int main() {


    // First Variation
    /*int n = 7;
    int r = 2;
    int res = 1;
    for(int i=0;i<r;i++) {

        res = res*(n-i);

        res = res/(i+1);

    }
    cout<<res<<endl;*/

    // Second Variation
    /*int n = 7; 
    

    for(int c=1;c<=n;c++) {
        cout<<ncr(n-1,c-1)<<" ";
    }*/

    int n = 5;
    int ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++) {
        ans = ans * (n-i);
        ans = ans/i;
        cout<<ans<<" ";
    }

    return 0;
}