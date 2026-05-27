# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main (){

string s;
int count=0;
getline(cin,s);

 sort(s.begin(),s.end());

  for(int i=0;i<s.size();i++){
    if(s[i]!=' ' && s[i]!= ',' && s[i]!='{' && s[i]!='}'){   // if(s[i]==all){ continue;}//which will left those ' '',''{''}' and continue to the sorted string/
        if(s[i]!=s[i+1]){                                     //then else{if(==) count++;//
            count++;

        }
    }
  }

cout << count;






 return 0 ;
}
