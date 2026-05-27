#include<iostream>
using namespace std;

int main (){

    int t,a,b,c,sum;
    cin >> t;
    while(t--){
        cin >> a>>b>>c;
        sum=0;

        if((a+b)>=10 || (a+c)>=10 || (b+c)>=10){
            cout << "YES"<< endl;
        }
        else
            cout << "NO"<< endl;

    }
 return  0;
}
