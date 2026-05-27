# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main (){

    int n,m,mini=0,ans;
    cin >> n;
    cin >> m;
    int A[m];

    for(int i=0;i<m;i++){
        cin >> A[i];
    }
    sort(A,A+m);
   mini=A[m-1]-A[0];

   for(int i=n;i<=m;i++){
    ans=A[i-1]-A[i-n];
    mini=min(mini,ans);
   }

  cout << mini;

 return 0;
}
