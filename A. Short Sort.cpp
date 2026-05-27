#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main (){

int t;
cin >> t;
while(t--){
string s,p;
cin >> s;
p=s;
bool flag=false;

if(s=="abc"){
    flag=true;
}
else{
     swap(s[0],s[1]);
    if(s=="abc"){
        flag=true;
    }
    else{
            s=p;
        swap(s[0],s[2]);
        if(s=="abc"){
            flag=true;
        }
        else{
            s=p;
            swap(s[1],s[2]);
            if(s=="abc"){
                flag=true;
            }
            }
        }

    }

    if(flag){
        cout << "YES"<< endl;
    }
    else if(!flag){
        cout << "NO"<< endl;
    }

}



 return 0;
}
