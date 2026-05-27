# include <iostream>
using namespace std;
int main (){

   int a,x=0;
   cin >> a;
   string s;

    for(int i=1;i<=a;i++){
            cin>> s;
            if (s[1]=='+'){
                x++;
            }
            else{
                x--;
            }
         }
     cout << x;


 return 0;
}
