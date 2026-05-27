# include <iostream>
using namespace std;
int main (){

   int k,n,w,count=0;
   cin >> k >> n >> w;

   for (int i=0;i<w;i++){
   count++;
    count=count+i;
   }

  int total=count*k;
  int borrow=total-n;
 if(borrow <=0){
 cout << "0";
 }
 else{
    cout << borrow;
 }

 return 0;
 }
