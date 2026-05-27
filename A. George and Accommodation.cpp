# include <iostream>
using namespace std;

 int main (){

   int n,count=0;
   cin >> n;
      int P[n];
      int Q[n];


   for(int i=0;i<n;i++){
    cin >> P[i];
    cin >> Q[i];

    if(P[i]<=Q[i]-2){
        count++;
    }
   }
   cout << count;

  return 0;
 }
