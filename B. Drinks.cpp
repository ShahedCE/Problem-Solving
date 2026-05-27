# include<iostream>
using namespace std;

int main (){

    int n,i;
    double sum=0;
    cin >> n;
     int A[n];

    for (i=0;i<n;i++){
        cin >> A[i];
        sum+=A[i];
    }
    double result=sum/n;
    cout << result;


 return 0;
}
