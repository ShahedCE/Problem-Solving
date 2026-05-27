#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

int t,a,b;
cin >> t;

for(int i=0;i<t;i++){

    cin >> a>> b;
    int min_move=0;

    if(a==b){
        cout << min_move<< endl;
    }
    else if(a>b){
        min_move=ceil((a-b)/10.0);

       cout << min_move<< endl;
    }
    else{
        min_move=ceil((b-a)/10.0);
        cout << min_move<< endl;
    }
}



 return 0;
}
