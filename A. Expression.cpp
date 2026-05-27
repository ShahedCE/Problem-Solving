# include <iostream><algorith>
using namespace std;

 int main (){
 int a,b,c;
 int x1,x2,x3,x4,x5;

 cin >> a>> b>> c;

  x1=a+b+c;
  x2=a+b*c;
  x3=a*(b+c);
  x4=a*b*c;
  x5=(a+b)*c;

 int ans= max(x1,(max(x2,max(x3,max(x4,x5)))));

  cout << ans;


  return 0;
 }
