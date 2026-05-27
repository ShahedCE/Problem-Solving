#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main (){

vector <pair<int,int>> count1;
vector <pair<int,int>> count2;
vector <pair<int,int>> count3;

int n;
cin >> n;
vector <int> v(n);
for(int i=0;i<n;i++){
    cin >> v[i];
}
for(int i=0;i<n;i++){

    if(v[i]==1){
        count1.push_back({1,i+1});
    }
    else if(v[i]==2){
        count2.push_back({2,i+1});
    }
    else{
        count3.push_back({3,i+1});
    }
}

int team=min({count1.size(),count2.size(),count3.size()});
cout << team <<  endl;

for(int i=0;i<team;i++){
    cout << count1[i].second << " "<< count2[i].second<< " "<< count3[i].second<< endl;
}

 return 0;

}
