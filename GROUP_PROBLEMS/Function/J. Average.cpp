#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void Average(double a[], int n, double sum ){

  double avg;

  avg=sum/n;
  cout << fixed << setprecision(7)<<avg;

}


int main(){
int n;
cin >> n;

double a[n];
double sum=0;
for(int i=0;i<n;i++){
    cin >> a[i];
    sum=sum+a[i];
}
Average(a,n,sum);
 return 0;
}
