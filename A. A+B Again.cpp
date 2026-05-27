#include<iostream>
#include<string>
using namespace std;

int main(){

    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int sum=0;
        sum+=n%10;
        n=n-(n%10);
        n=n/10;
        sum+=n;
        cout << sum<< endl;
    }


return 0;
}
