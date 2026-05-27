#include <iostream>
# include <bits/stdc++.h>
using namespace std;

bool prime(int n){

bool flag=false;

for(int i=2;i<=sqrt(n);i++){

        if(n%i==0 && n!=2){
            flag=true;
        }
        }
if(flag){
    return false;
}
else
    return true;

}

int main(){

int T;
cin>> T;

while(T--){
        int N;
       cin >> N;
      if(N>1){
        if(prime(N)){
            cout <<"YES";
        }
        else
            cout << "NO";
            cout << endl;
      }
      else
        cout << "NO" << endl;

}
 return 0;
}
