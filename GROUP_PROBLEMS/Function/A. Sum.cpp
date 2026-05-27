#include <iostream>
using namespace std;

int main(){

int n,a,b,c;
cin >> n;
for(int i=0;i<n;i++){

  cin >> a>>b>>c;
    if((a==0)&& (b==0) && (c==0)){
        cout << "YES";
        cout << endl;
    }

    else if(a==(b+c)){
        cout << "YES";
        cout << endl;

    }
    else if(b==(a+c)){
        cout << "YES";
        cout << endl;

    }
    else if(c==(a+b)){
        cout << "YES";
        cout << endl;

    }
    else {
        cout << "NO";
        cout << endl;

    }
}

 return 0;
}
