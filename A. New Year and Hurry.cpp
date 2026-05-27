#include <iostream>
using namespace std;

int main (){

int n,k;
cin >> n;
cin >>k;

int current_time=(240-k);
int solved_problem=0;

for(int i=1;i<=n;i++){

    if(current_time>=(5*i)){
        current_time=current_time-(5*i);
        solved_problem++;
    }
    else{
        break;
    }
}
cout << solved_problem;

 return 0;
 }
