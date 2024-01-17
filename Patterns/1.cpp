#include<iostream>
using namespace std;
/*
void print1() {

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void print2() {

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void print3() {

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4() {

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

}

void print5() {

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

void print6() {

    for(int i=5;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print7(int n) {

    for(int i=0;i<n;i++) {

        //space
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";
        }

        //start
        for(int j=0;j<2*i+1;j++) {
            cout<<"*";
        }

        //space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout<<" ";
        }
        cout << endl;
    }

}

void print8(int n) {

    for(int i=n;i>=0;i--) {

        // space
        for(int j=0;j<=n-i-1;j++) {
            cout<<" ";
        }

        // star
        for(int j=0;j<2*i+1;j++) {
            cout<<"*";
        }

        // space
        for(int j=0;j<=n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9(int n) {

    for(int i=0;i<2*n-1;i++) {

        for(int j=0;j<i;j++) {
            cout<<"*";
        }

        // for(int j=n;j>=0;j--) {
        //     cout<<"*";
        // }
        cout<<endl;
    }
}

void print10(int n) {

    for(int i=0;i<2*n-1;i++) {

        int stars = i;

        if(i > n) stars = 2*n-i;
        for(int j=1;j<=stars;j++) {
            cout<<"*";
        }
        cout<<endl;

    }

}

void print11(int n) {

    for(int i=0;i<n;i++) {
        int start = 1;
        if(i%2 == 0) start = 1;
        else start = 0;

        for(int j=0;j<=i;j++) {
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }


}

void print12(int n) {

    for(int i=1;i<=n;i++) {

        //numbers
        for(int j=1;j<=i;j++) {
            cout<<j;
        }
        //space
        for(int j=1;j<2*n-2*i;j++) {
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;

    }
}

void print13(int n) {

    int count = 1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<count++<<" ";
        }
        cout<<endl;
    }

}

void print14(int n) {

    for(int i=0;i<n;i++) {
        char str = 'A';
        for(int j=0;j<=i;j++) {
            cout<<str++<<" ";
        }
        cout<<endl;
    }
}

void print15(int n) {

    for(int i=n;i>0;i--) {
        char str = 'A';
        for(int j=0;j<i;j++) {
            cout<<str++<<" ";
        }
        cout<<endl;
    }
}

void print16(int n) {

    char str = 'A';
    for(int i=0;i<n;i++) {

        for(int j=0;j<=i;j++) {
            cout<<str<<" ";
        }
        str++;
        cout<<endl;
    }
}

void print17(int n) {

    for (int i = 0; i < n; i++)
    {

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // char
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout<<ch;
            if(j <= breakPoint) ch++;
            else ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void print18(int n) {

    for(int i=0;i<n;i++) {

        for(char ch='E'-i;ch<= 'E';ch++) {
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}
*/

void print19(int n) {

    for(int i=0;i<n;i++) {

        // star
        for(int j=0;j<n-i;j++) {
            cout<<"*";
        }
        //space
        for(int j=0;j<2*i;j++) {
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++) {
            cout<<"*";
        }
        cout<<endl;
        
    }

    for(int i=1;i<=n;i++) {
        
        //star
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*n-2*i;j++) {
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;

    }
}


void print20(int n) {

    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++) {

        int stars = i;
        
        if(i>n) stars = 2*n-i;
        // star
        for(int j=1;j<=stars;j++) {
            cout<<"*";
        }
        // space
        for(int j=1;j<=spaces;j++) {
            cout<<" ";
        }
        // star
        for(int j=1;j<=stars;j++) {
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }

}

void print21(int n) {

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==0 || i==n-1 || j==0 || j==n-1) {
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    
}

void print22(int n) {

    for(int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++) {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top, down), min(left, right)));
        }
        cout<<endl;
    }

}

int main() {

/*  print1();
    cout << endl;

    print2();
    cout << endl;

    print3();
    cout << endl;

    print4();
    cout << endl;

    print5();
    cout<<endl;

    print6();
    cout << endl;

    print7(5);
    cout<<endl;

    print8(4);
    cout << endl;

    print9(9);
    cout<<endl;

    print10(5);
    cout<<endl;

    print11(5);
    cout<<endl;

    
    print12(4);
    cout<<endl;

    print13(5);
    cout << endl;

    print14(5);
    cout << endl;

    print15(5);
    cout << endl;

    print16(5);
    cout << endl;

    print17(5);
    cout << endl;*/

    // print18(5);
    // cout << endl;

    // print19(5);
    // cout<<endl;

    // print20(5);
    // cout<<endl;

    // print21(4);
    // cout<<endl;

    print22(4);

    return 0;
}