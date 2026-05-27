# include <iostream>
# include <cstring>
using namespace std;
int main (){

   string s;
   cin >> s;
   int up=0;
   int low=0;

   for(int i=0;i<s.size();i++){
    if (isupper(s[i])){
        up++;
    }
    else{
        low++;
    }
   }
      for(int i=0;i<s.size();i++){

      if(up<low){
        s[i]=tolower(s[i]);
      }
      }
    for(int i=0;i<s.size();i++){

      if(up>low){
        s[i]=toupper(s[i]);
      }
      }
      for(int i=0;i<s.size();i++){

      if(up==low){
        s[i]=tolower(s[i]);
      }
      }
          for(int i=0;i<s.size();i++){

    cout << s[i];
          }


 return 0;
}
