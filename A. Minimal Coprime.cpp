#include<iostream>
using namespace std;

int main(){

int t,l,r;
cin >> t;

while(t--){

    cin >> l>>r;

    /*if(l>1 && l==r){
        cout << 0 << endl;
    }
    */
     if(l==1 && r==1){
        cout << 1 << endl;
    }
    else{
        cout << r-l<<endl;
    }


}

return 0;
}
