# include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main () {

int n;
cin >> n;
string s;
int num,sum_1,sum_2;
int a[5];

for(int i=0;i<n;i++){
    cin >>s;
   num=stoi(s);
    a[5]=num%10;
    num=num/10;
    a[4]=num%10;
    num=num/10;
    a[3]=num%10;
    num=num/10;
    a[2]=num%10;
    num=num/10;
    a[1]=num%10;
    num=num/10;
    a[0]=num;

   sum_1=a[0]+a[1]+a[2];
   sum_2=a[3]+a[4]+a[5];

    if(sum_1==sum_2){
        cout << "YES"<< endl;
    }
    else{
        cout << "NO"<< endl;
    }

}

return 0;
}
