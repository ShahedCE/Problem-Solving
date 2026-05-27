#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    long long n,m;

    for(int i=0;i<t;i++){
        cin >> n>>m;

        if(n==1 && m==1){
            cout << 2 << endl;
        }
        else if((n>1)&& (n==m)){
                cout  << n+1<< endl;

        }
        else if(n>m){
            cout << n+1<< endl;
        }

        else if(m>n){
            cout << m+1<< endl;
        }
    }

 return 0;
}
