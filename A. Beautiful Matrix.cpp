  # include <iostream>
    using namespace std;
    int main (){

   int A[6][6];
   int row,col;

   for(int i=1;i<6;i++){

    for(int j=1;j<6;j++){
        cin >> A[i][j];
        if (A[i][j]==1){
            row=abs(3-i);
            col=abs(3-j);

        }

    }
   }
   cout << row+col;


      return 0;
    }
