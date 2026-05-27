#include <iostream>
#include<cstring>
using namespace std;

int main(){

int t,count=0;

cin >> t;
while(t--){
    string s;
    cin >>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count++;
        }
    }
            cout << count << endl;
            count=0;
}


 return 0;
}
