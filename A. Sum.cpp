#include <iostream>
using namespace std;

int main(){

  int t;
  cin >> t;
  int A[t][2];
  string B[t-1];

   for (int i=0;i<t;i++){

      for(int j=0;j<3;j++){
        cin >> A[i][j];
      }
   }
   for (int i=0;i<t;i++){

      for(int j=0;j<3;j++){
        cout << A[i][j] << " ";
      }
   }

   /*for (int i=0;i<t;i++){

      if((A[i][0]==A[i][1]+A[i][2]) || (A[i][1]==A[i][0]+A[i][2]) || (A[i][2]==A[i][0]+A[i][1])){
        B[i]="YES";
      }
      else{
        B[i]="NO";
      }

  }

  for(int i=0;i<t;i++){
    cout << B[i]<< endl;
  }
*/



 return 0;

}
