#include <iostream>
using namespace std;

int main(){

  int x;
  cin >> x;
  int arr[x];

  for(int i=0;i<x;i++){
    cin >> arr[i];
  }
  int sereja=0,dima=0,bid=1;

  int i=0,n=x;//two pointers to get track

  while(i<n){

    if(bid%2!=0){
        if( arr[n-1]>arr[i] ){
            sereja+=arr[n-1];
            n--;
        }
    else if( arr[i]>arr[n-1] ){
        sereja+=arr[i];
        i++;
    }

    else if (bid==x){
        sereja+=arr[n-1];
        n--;
        i++;
    }
    }

    if(bid%2==0){
        if( arr[n-1]>arr[i] ){
            dima+=arr[n-1];
            n--;
        }
    else if( arr[i]>arr[n-1] ){
        dima+=arr[i];
        i++;
       }
        else if (bid==x){
        dima+=arr[n-1];
        n--;
        i++;
    }
    }
    bid++;
  }

    cout <<sereja << " " << dima;

 return 0;
}
