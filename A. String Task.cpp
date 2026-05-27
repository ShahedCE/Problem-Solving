# include <iostream>
using namespace std;
int main (){

  string s,s2;
  cin >> s;
  int i;

  for(i=0;i<s.size();i++){

    if(s[i]=='A'||s[i]=='I'||s[i]== 'O'||s[i]=='E'||s[i]=='U'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y' ){

        continue;
    }

    else{
        s2+='.';
        s2+=towlower(s[i]);

   }

  }
    cout << s2 << endl;

 return 0;
}
