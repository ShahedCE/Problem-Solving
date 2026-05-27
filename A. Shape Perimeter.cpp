#include<iostream>
using namespace std;


int main(){

int t,n,m,a,b;
cin >> t;

while (t--){
    cin >>n>>m;
    int per;

    for(int i=0;i<n;i++){
        cin >> a>>b;

        if(i==0){
            per=m*4;
        }
        else{
            per+=(a+b)*2;
        }
    }

    cout << per << endl;
}

 return 0;
}
