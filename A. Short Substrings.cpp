#include<iostream>
#include<string>
using namespace std;

int main (){

    int t;
    cin >> t;
    string a,b;

    while(t--){
        cin >> b;
        if(b.length()==2){
            a=b;
        }
        else{
            a=b[0];
            for(int i=1;i<b.length();i++){
                if(i%2!=0){
                    a+=b[i];
                }
            }
        }
        cout << a << endl;
    }

 return 0;
}
