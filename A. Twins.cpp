# include <iostream>
# include <bits/stdc++.h>
using namespace std;

 int main (){

     int n;
     int sum=0,sum2=0,count;
     cin >> n;
     int A[n];

     for(int i=0;i<n;i++){
        cin >> A[i];
        sum+=A[i];
     }
     sum=sum/2;

     sort(A,A+n);//Sorting function

     for(int i=n-1;i>=0;i--){
         sum2+=A[i];
         count++;
         if(sum2>sum){
            cout<< count;
            break;
         }
     }

  return 0;
 }
