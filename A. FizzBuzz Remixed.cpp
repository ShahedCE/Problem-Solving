#include <iostream>
using namespace std;


int main (){

   int t;
   cin >> t;

   while (t--){
    int n,c=0;
    cin >> n;
     if(n<=2){
        cout << n+1<< endl;
     }
     else if(n>2 && n<15){
        cout << 3 << endl;
     }

     else{

        int s,rem;
        s=n/15;
        rem=n-(s*15);

        if(rem>=2){
            c=3+(s*3);
        }
        else if(rem==1){
            c=2+(s*3);
        }
        else if(rem==0){
            c=1+(s*3);
        }

        cout << c << endl;
     }
   }


 return 0;
}
