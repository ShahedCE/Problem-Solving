#include<iostream>
using namespace std;

int remain(int a){

 int i=1;
  while(i<=a){
    i=i*2;
  }
  return (a-(i/2));
}

int main(){

    int x,count=0;
    cin >> x;

   while(x!=0){
    x=remain(x);
    count++;
   }
   cout << count;

 return 0;
}
