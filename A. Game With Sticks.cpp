#include <iostream>
using namespace std;

int main(){

 int n,m;
 cin >> n>>m;
 int move_=n*m;

 int A=0,M=0;

 if(n==1 && m==1){
    cout << "Akshat";
 }

 else{
    while(n>0 && m>0){

        A++;
        move_=move_-(n+m-1);
        n--;
        m--;

        if(n>0 && m>0){
        M++;
        move_=move_-(n+m-1);
        n--;
        m--;
        }
    }

    if(A>M){
            cout << "Akshat";
    }
    else{
        cout <<"Malvika";
    }
 }

return 0;
}
