#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,c;
    int A[4];
    for(int i=0; i<4; i++)
    {
        cin>>A[i];
    }

    sort(A,A+4);

    if(A[0]==A[1]==A[2]){
        cout << A[0] << " "<< A[1]<< " "<<A[2];
    }
    else{
        a=A[3]-A[0];

        b=A[2]-a;

        c=A[3]-(a+b);

        cout << a << " "<< b<< " "<< c;

    }

        return 0;
}
