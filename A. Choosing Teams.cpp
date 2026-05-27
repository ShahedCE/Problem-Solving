#include<iostream>
#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main (){

int n,k,count,team=0;
cin >> n>>k;
int a[n];

for(int i=0;i<n;i++){
    cin >> a[i];

}
sort(a,a+n);
for(int i=0;i<n-2;i=i+3){
        count=0;
        while(count!=k){
            if(a[i+2]<5 && ((i+2)<n)){
                count++;
                if(count==k){
                    team++;
                }
                else{
                    a[i+2]+=1;
                }
            }
            else{
                    break;

                 }
        }
    }


  cout << team;
 return 0;
}
