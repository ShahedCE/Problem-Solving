#include <iostream>
using namespace std;

using namespace std;
int main (){

int n,h,count1=0,count2=0;
cin >> n >> h;
int A[n];
for(int i=0;i<n;i++){
    cin >> A[i];
}

for(int i=0;i<n;i++){
    if(A[i]>h){
        count2=count2+2;
    }
    else {
        count1=count1+1;
    }
}
cout << count1+count2;


 return 0;
}
