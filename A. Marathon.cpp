# include <iostream>
using namespace std;

int main () {

    int n,a,b,c,d;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a>>b>>c>>d;
        int person=0;

        if(b>a){
            person++;
        }
        if(c>a){
            person++;
        }
        if(d>a){
            person++;
        }
        cout << person<< endl;
    }

 return 0;
}
