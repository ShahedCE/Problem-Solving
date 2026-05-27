# include <iostream>
using namespace std;

int main (){
 int n,note100=0,note20=0,note10=0,note5=0,note1=0;

 cin >> n;

  if(n>=100){
    note100=n/100;
    n=n-(note100*100);
  }
    if(n>=20){
    note20=n/20;
    n=n-(note20*20);
  }
   if(n>=10){
    note10=n/10;
    n=n-(note10*10);
  }
  if(n>=5){
    note5=n/5;
    n=n-(note5*5);
  }

  if(n>=1){
    note1=n/1;
    n=n-(note1*1);
  }


  cout << note100+note20+note10+note5+note1;
return 0;
}
