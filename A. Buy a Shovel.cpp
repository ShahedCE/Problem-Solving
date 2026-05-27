#include <iostream>
using namespace std;

int main (){

int k,r,cost;
cin >>k>>r;
int i=1;
bool flag=false;

while(1){

        if(flag==false){
     cost=k*i;
     if((cost)%10==0 || (cost)%10==r){
        cout << i;
        flag=true;
     }
         i++;
        }
else if(flag==true){
    break;
}

}
 return 0;
}
