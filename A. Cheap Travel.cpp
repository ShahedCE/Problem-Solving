#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){


   int n,m,a,b,money=0,ticket_1,cost_1;
  float mprice;
    cin >> n>>m>>a>>b;
    mprice=static_cast<float>(b)/m;//price of each m ticket ride

    if(a<=mprice){
        money+=a*n;
    }
    else {

            if(n%m==0){
                money+=(n/m)*b;
            }
            else{
                money+=(n/m)*b;
                 ticket_1=n-((n/m)*m);
                 cost_1=ticket_1*a;

                if(cost_1<b){
                    money+=cost_1;
                }
                else{
                    money+=b;
                }
            }
    }

    cout << money;

 return 0;
}
