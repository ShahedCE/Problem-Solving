#include <iostream>
using namespace std;


void Print(int n,char c){

for(int i=0;i<n;i++){

    cout << c << " ";
}
cout << endl;
}

int main(){

int t,N;
cin >> t;
char C;

for(int i=0;i<t;i++){

cin >> N;
cin >>  C;

Print(N,C);

}


 return 0;

}
