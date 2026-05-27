#include <iostream>
using namespace std;


 void swap_func(int x, int y){

 swap(x,y);
 cout << x<< " "<< y;


 }


int main (){


int a,b;
cin >> a>>b;

swap_func(a,b);

return 0;
}
