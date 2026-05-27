#include <iostream>
using namespace std;

int main (){

 int n,a,b,c;
 cin >> n;


 for(int i=0;i<n;i++){
    cin >> a>>b>>c;

    if((a>b && a<c)||(a>c && a<b)){
        cout << a<< endl;
    }
    else if((b>a && b<c) || (b>c && b<a)){
        cout << b << endl;
    }
    else{
        cout << c << endl;
    }
 }

 ///Another way->
 /*
  int n;
 cin >> n;
 int s=3;
 int a[s];

 for(int i=0;i<n;i++){
    cin >> a[0]>>a[1]>>a[2];
    sort(a,a+3);
        cout << a[1] << endl;
    }
    */


 return 0;
}
