# include <iostream>
using namespace std;

int main (){

    long long int n,k,y,x;
    cin >> n;
    cin >> k;

    if(n%2==0){
        x=n/2;
        }
    if(n%2!=0){
        x=(n/2)+1;
    }

    if(k<=x){
        y=(k*2)-1;
        cout << y<< endl;
    }
   else if(k>=x){
        y=(k-x)*2;
        cout<< y<< endl;
   }



 return 0;
}
