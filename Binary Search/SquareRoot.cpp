#include<iostream>
using namespace std;

int sqrt(int n){

    int s=1, e=n;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s<=e){

        int square = mid*mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid+1;
        } 
        else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int prec, int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i=0;i<prec;i++){
        factor = factor/10;

        for(double j=ans; j*j<n; j += factor){
            ans = j;
        }
    }
    return ans;
}



int main() {

    int n;
    cout<<"\n Enter the number: ";
    cin>>n;

    int sq = sqrt(n);
    cout<<"Square root of x is: "<<sq<<endl;

    cout<<"\n Answer is: "<<morePrecision(n, 3, sq)<<endl;
 
    return 0;
}