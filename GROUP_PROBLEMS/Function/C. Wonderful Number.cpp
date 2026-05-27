#include <iostream>
# include <bits/stdc++.h>
using namespace std;

bool isEven(int n){

 if(n%2==0){
    return true;
 }
  else {
        return false;
    }
}

bool isBinary(int n){

   string srev,sbin;
   int mod;

   while(n!=0){

    mod=n%2;
    n=n/2;
    if(mod==1){
        srev+="1";
    }
    else{
        srev+="0";
    }}

    sbin=srev;
    reverse(sbin.begin(),sbin.end());

    if(sbin==srev){
        return true;
    }
    else{
        return false;
    }
}

int main(){
 int N;
 cin >> N;

 if(isEven(N)){
    cout << "NO";

 }
 else{
    if(isBinary(N)){
    cout << "YES";

    }
    else cout << "NO";
 }

 return 0;
}
