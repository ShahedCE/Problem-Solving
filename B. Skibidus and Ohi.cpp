#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){

   int t;
   cin >> t;

   while(t--){

    string s;
    cin >> s;
    bool flag=false;
    int n=s.length();

    for(int i=0;i<=n-1;i++){
        if(s[i]==s[i+1]){
            flag=true;
            break;
        }
      }
      if(flag){
        cout << 1<< endl;
      }
      else{
        cout << s.length()<< endl;
      }
   }


 return 0;
}
