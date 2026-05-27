# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int main (){

  int x,c=0,m;
  cin >> x;
  int A[x];

  for(int i=0;i<x;i++){

    cin >> A[i];
    if(A[i]>=A[i-1]){
        c++;
        m=max(m,c);
    }
    else {
        c=1;
    }

  }
   cout << m;

return 0;

}
