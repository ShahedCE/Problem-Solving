#include<iostream>
using namespace std;

int main (){

    int t;
    cin >>t;
    while (t--){
        int a,b,c;
        cin >>a>>b;
        int result=b;
        for(int i=a;i<=b;i++){
             c=i;
            result=min(result,(c-a)+(b-c));
        }
        cout << result << endl;

    }

 return 0;
}
