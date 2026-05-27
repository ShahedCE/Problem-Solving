# include <iostream>
using namespace std;

int main (){

  int A[4],i,j;
  int count=0;

  for(i=0;i<4;i++){
    cin >> A[i];
  }

  for(i=0;i<4;i++){

    for(j=i+1;j<4;j++){

        if(A[i]==A[j]){
            count++;
         break;
       }
    }
  }
   cout << count;

return 0;
}
