# include <iostream>
#include <bits/stdc++.h>
using namespace  std;


void max_min(int arr[],int N){
int n=N;
int min_=arr[0];
int max_=arr[0];

for(int i=1;i<n;i++){
    if(arr[i]<=min_){
        min_=arr[i];
    }
    else if(arr[i]>=max_){
        max_=arr[i];
    }
}

cout << min_ <<" " << max_;

}


int main(){

int N;
cin >> N;
int arr[N];

for(int i=0;i<N;i++){
    cin >> arr[i];
}
max_min(arr,N);

 return 0;
}
