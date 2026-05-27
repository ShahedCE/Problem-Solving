#include<iostream>
using namespace std;

int main (){

    int t;
    cin >> t;

    while(t--){

        int n,k,p;
        cin >> n>>k>>p;
        int count=0,sum=0;
        if(k<0){
            k=(-1)*k;
        }
        if(k==0){
            cout <<0<< endl;
        }
        else{
            while(sum!=k){
                sum=sum+p;
                count++;
                if(sum>k){
                    sum=sum-p;
                    p--;
                    count--;
                }
            }
            if(count<=n){
                cout << count<< endl;
            }
            else{
                cout << -1 << endl;
            }

        }
    }


 return 0;
}
