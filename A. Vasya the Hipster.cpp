#include <iostream>
using namespace std;

int main (){

    int a,b,dif=0,same=0;
    cin >> a>> b;

    if(a==b){
        dif=a;
        same=0;
    }
    else if(a>b){
        dif=b;
        a=a-b;
        same=a/2;
    }
    else {
        dif=a;
        b=b-a;
        same=b/2;
    }

    cout << dif << " " << same;

 return 0;
}
