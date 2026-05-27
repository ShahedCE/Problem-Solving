#include<iostream>
#include<string>
using namespace std;


int main (){

    int t,size_=0;
    cin >> t;

    while(t--){

        string s;
        cin >> s;
        size_=s.length();

       if(size_==1){
        cout << 1;
       }
        else{
            for(int i=0;i<size_-1;i++){
                if(s[i]==s[i+1]){
                    s.erase(s.begin()+(i+1));
                    s[i]=s[i-1];

                }
                i=0;
                size_--;
                cout << s;
            }


        }


    }


  return 0;
}
