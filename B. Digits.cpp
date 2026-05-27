# include <iostream>
#include<bits/stdc++.h>
using namespace std;


  long long factorial(int n)
       {
    // Base case - If n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case - Return n multiplied by
    // factorial of (n-1)

    return n * factorial(n - 1);
     }

int main () {

    int t,n,d;
    long long fac;

    cin >>t;


    for(int i=0;i<t;i++){
        long long num;
        string s,s1;
        cin >> n>>d;
        fac=factorial(n);
        s1=to_string(d);
        for(long long i=0;i<fac;i++){
            s=s+s1;
        }
      num=stol(s);
      cout << num;
    }



 return 0;
}
