#include <iostream>
using namespace std;

int main (){

    int t,k;
    cin >>t;


    for(int j=0;j<t;j++){
        cin >> k;
        int current=1;
         int i=1;
        while(1){
            bool flag=false;

            if(i%3!=0 && i%10!=3){
                if(current==k){
                    cout << i<< endl;
                    flag=true;
                }
                current++;
            }
            i++;
            if(flag==true){
                break;
            }
        }
    }

 return 0;
}
