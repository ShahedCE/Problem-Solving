#include<iostream>
using namespace std;

int main(){

int t;
cin >> t;

long long n;

while (t--){
   cin >> n;
   if(( n&(n-1))==0){
    cout<< "NO"<< endl; //if n is power of 2
   }
   else{
    cout << "YES"<< endl;
   }
}


return 0;
}
