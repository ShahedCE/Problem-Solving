#include<iostream>
using namespace std;

int main (){

int t;

cin >> t;

while(t--){

    int n;
    bool flag=true;
    cin >> n;
    int a[n];
    for(int i=0;i<n-2;i++){
        cin >>a[i];
    }
     for(int i=1;i<n-3;i++){
       if(a[i-1]==1 && a[i]==0 && a[i+1]==1){
        flag=false;
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
