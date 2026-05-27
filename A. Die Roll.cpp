#include<iostream>
using namespace std;

int main (){

    int y,w,max_;
    cin >> y>>w;

    max_=max(y,w);

    if(max_==6){
        cout << "1/6";
    }
    else if(max_==5){
        cout << "1/3";
    }
    else if(max_==4){
        cout << "1/2";
    }
    else if(max_==3){
        cout << "2/3";
    }
    else if(max_==2){
        cout << "5/6";
    }
    else if(max_==1){
        cout << "1/1";
    }

 return 0;
}
