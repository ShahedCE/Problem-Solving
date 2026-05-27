#include<iostream>
using namespace std;

int main (){

    int t;
    cin>>t;

    while(t--){
        int n,count_1=0,count_2=0;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]==1){
                count_1++;
            }
            else if(a[i]==2){
                count_2++;
            }
        }

        if((count_1%2==0) && (count_2%2==0)){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO"<< endl;
        }

    }


return 0;
}
