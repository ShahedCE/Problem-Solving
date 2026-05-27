#include<iostream>
using namespace std;

int main (){

    int t;
    cin >> t;

    while(t--){
        int n,upper=0,lower=0,lu=0,ru=0,sub=0;
        cin >>n;
        string s;
        cin >>s;
        if(n<3){
            cout << 0<< endl;
        }
       else{  for(int i=0;i<n;i++){
            if(s[i]=='-'){
                upper++;
            }
            else if(s[i]=='_'){
                lower++;
            }
        }
        if(upper%2==0){
        lu=upper/2;
        ru=upper/2;
        }
        else if(upper%2!=0){
            ru=upper/2+1;
            lu=upper/2;
        }

        sub=(ru*lower)*lu;
        cout << sub << endl;
       }

    }



 return 0;
}
