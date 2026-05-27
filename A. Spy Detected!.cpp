#include <iostream>
using namespace std;

int main (){

  int t,n;
  cin >> t;

  for(int i=0;i<t;i++){
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    //conditions
    if(a[0]!=a[1]){

        if(a[1]==a[2]){
            cout << 1 << endl;
        }
        else if(a[0]==a[2]){
            cout << 2 << endl;
            }
        }

    else{
        for(int i=1;i<n-1;i++){
            if(a[i]!=a[i+1]){
            cout << i+2 << endl;
            break;
            }
           }
         }

  }


 return 0;
}
