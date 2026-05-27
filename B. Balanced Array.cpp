#include <iostream>
#include<vector>

using namespace std;

int main(){

int t,n;
cin>>t;
while(t--){
    cin >> n;
    if(n%4!=0){
        cout << "NO"<< endl;
    }

    else{
            vector<int> v;
            vector<int> o;
            cout << "YES"<< endl;
        int even=0;
        for(int i=0;i<n/2;i++){
                even=even+2;
        v.push_back(even);
        }

        int odd=1;
        int dec=n/2-1;
        while(dec--){
            o.push_back(odd);
            odd=odd+2;
        }

        int even_count=0;
        int odd_count=0;
        for(int i=0;i<v.size();i++){
                cout << v[i]<< " ";
            even_count+=v[i];
        }
        for(int i=0;i<o.size();i++){
            cout << o[i]<<" ";
            odd_count+=o[i];
        }
        int remain=even_count-odd_count;
        cout << remain << endl;

}
}

return 0;
}
