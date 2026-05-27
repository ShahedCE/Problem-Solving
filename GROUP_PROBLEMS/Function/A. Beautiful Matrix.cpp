#include <iostream>
using namespace std;

int main(){

int row,col,result;

int matrix[5][5];

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin >> matrix[i][j];
        if(matrix[i][j]==1){
            row=abs(2-i);
            col=abs(2-j);
            result=row+col;
        }
    }
}

cout << result;

 return 0;
}
