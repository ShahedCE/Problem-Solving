# include <iostream>
using namespace std;

 int main (){

   int n,count=0;
   cin >> n;
      int A[n];


   for(int i=0;i<n;i++){
    cin >> A[i];
   }
    for(int i=0;i<n;i++){
        if(A[i]==1){
           count++;
        }
    }
    if(count==0){
        cout << "EASY";
    }
    else if (count>0){
        cout << "HARD";
    }


 return 0;
 }
