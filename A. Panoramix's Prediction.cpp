#include <iostream>
using namespace std;

int main (){

int n,m,next=0;
cin >> n>>m;

for(int j=n+1;j<=m;j++){
        int count=0;
for(int i=1;i<=m;i++){
    if(j%i==0){
        count++;
    }
}
if(count==2){
    next++;
    if(next==1 && j==m){
        cout << "YES";
    }
    else if(next>1 && j==m){
        cout << "NO";
    }
}
else if(count>2 && j==m){
        cout << "NO";
    }
}




return 0;
}
