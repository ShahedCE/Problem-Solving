# include <iostream>
#include <math.h>
using namespace std;

long long equation(int x,int n){

long long  result=0;

for(int i=2;i<=n;i=i+2){
    result+=pow(x,i);
}
return  result;
}


int main (){

int X,N;

cin >> X;
cin >>N;

cout <<equation(X,N);

 return 0;
}
