#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
        int n;
        cin >> n;

        if(n>=0){
            cout << n;
        }
        else{
            int x=abs(n);
            string s=to_string(x);
            int l=s.length();
            if(l==1){
                cout << 0;
            }
            else{
                    char c=s[l-1];
                s.erase(s.begin()+(l-1));
                int l1= stoi(s);

                s.erase(s.begin()+(l-2));
                int l2=stoi(s+c);

                cout << -(min(l1,l2));
            }
        }

 return 0;
}
