# include <iostream>
using namespace std;

int main (){

  int n,i;
  cin >> n;

  int friend_no[n];
   int gift[n];

  for(i=1;i<=n;i++){
    cin >> friend_no[i];
    gift[friend_no[i]]=i;

  }
  for(i=1;i<=n;i++){
    cout << gift[i]<< " ";
  }
  cout << endl;

return 0;
}
