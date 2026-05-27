# include<iostream>
using namespace std;

int main (){

  int t,n,count=0;
  cin >> t;
  int A[t];
  for(int i=0;i<t;i++){
    cin >>A[i];
  }
  for(int i=0;i<t;i++){
        if(A[i]==1 || A[i]==2){
            cout <<"0"<< endl;
        }
    else if(A[i]%2!=0){
        count=(A[i]-1)/2;
        cout << count << endl;
    }
    else {
        count=(A[i]/2)-1;
        cout << count << endl;
    }
  }
 return 0;
}
