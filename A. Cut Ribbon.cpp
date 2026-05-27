#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,c;
    cin >> n>>a>>b>>c;
    int cnt=0;

//int s=3;
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);

    int i=0;
    while(i<3){
        if(n>=arr[i]){
        cnt+=(n/arr[i]);//2
        n=n-(cnt*arr[i]);
        i++;
        }
        else{
            break;
        }
    }
    cout << cnt;

return 0;
}
