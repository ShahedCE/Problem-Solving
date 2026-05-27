#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin >>t;
while(t--){
string s;
cin>> s;
int l=s.length();

if(l%2!=0){
    cout << "NO" <<endl;
}
else{
    int div=l/2;
    string first,last;
    for(int i=0;i<div;i++){
        first+=s[i];
    }
     for(int i=div;i<l;i++){
        last+=s[i];
    }
   if(first==last){
    cout << "YES"<< endl;
   }
   else if(first!=last){
    cout << "NO"<< endl;
   }
}


}

return 0;
}
