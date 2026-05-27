# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main (){

 int n,p,q,count=0;
 cin >> n>> p;
 int Arr[200];
 for(int i=0;i<p;i++){
    cin >> Arr[i];
 }
 cin >> q;
 for(int i=p;i<p+q;i++){
    cin >> Arr[i];
 }

  sort(Arr,Arr+(p+q));

  for(int i=0;i<p+q;i++){

       if(Arr[i]!=Arr[i+1]){
         count++;
       }
    }

    if(count==n){
        cout <<"I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }



return 0;
}
