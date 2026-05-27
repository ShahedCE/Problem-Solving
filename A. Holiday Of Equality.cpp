#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;

    int m,count=0;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
     if(n==1){
        cout << 0;
    }
    else{
            sort(a,a+n);
        m= a[n-1];

        for(int i=0;i<n;i++){
            count+=(m-a[i]);
        }
        cout << count;
    }


 return 0;
}
