# include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int i=1;
  int A[2];

  for(int i=0;i<3;i++){
    cin >> A[i];
  }

  sort(A,A+3); // A+ A+length of the array


  int dis;

  dis=((A[1]-A[0])+(A[2]-A[1]));
  cout << dis;


 return 0;
}
