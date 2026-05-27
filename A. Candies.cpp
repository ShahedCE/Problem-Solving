#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >>n;
        if(n%2!=0){

                for(int x=1;x<=n;x=x+2){
                    int factor=2;int sum=x;
                     bool flag=false;
                    while(sum<n){
                        sum=sum+(x*factor);
                        if(sum==n){
                          cout << x << endl;
                            flag=true;
                        }
                    if(flag){
                        break;
                          }
                        factor=factor*2;
                    }
                    if(flag)
                        break;

                 }

               }
             else if(n%2==0){

                for(int x=2;x<=n;x=x+2){
                    int factor=2;int sum=x;
                     bool flag=false;
                    while(sum<n){
                        sum=sum+(x*factor);
                        if(sum==n){
                          cout << x << endl;
                            flag=true;
                        }
                    if(flag){
                        break;
                          }
                        factor=factor*2;
                    }
                    if(flag)
                        break;

                 }

               }

    }


return 0;

}
