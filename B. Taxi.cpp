# include <iostream>
using namespace std;

int main () {
int n;
int count4=0,count3=0,count2=0,count1=0;
int  min_taxi=0;
cin >> n ;
int A[n];

for(int i=0;i<n;i++){
    cin >> A[i];

    if(A[i]==4){
        count4++;
    }
    else if(A[i]==3){
        count3++;
    }
    else if(A[i]==2){
        count2++;
    }
    else {
        count1++;
    }
}
  min_taxi=count4;

  if(count1!=0 && count3!=0){

    if(count1==count3){
        min_taxi=min_taxi+count1;
        count1=0;
        count3=0;
    }
    else if(count1>count3){
        min_taxi=min_taxi+count3;
        count1=count1-count3;
        count3=0;
    }
    else if(count3>count1){
        min_taxi=min_taxi+count1;
        count3=count3-count1;
        count1=0;
    }
  }
     //for remaining 3
    min_taxi=min_taxi+count3;


 min_taxi=min_taxi+(count2/2);    //For 2 members

 if(count2%2!=0 && count1==0){   //For remaining 2 and 1
    min_taxi=min_taxi+1;
     }
       else if(count2%2!=0 && count1>0){
            int remaining=2+count1;
            min_taxi=min_taxi+(remaining/4);
            if(remaining%4!=0){
            min_taxi=min_taxi+1;
          }
        }

 else if(count2%2==0 && count1>0){ //For just remaining 1
    min_taxi=min_taxi+(count1/4);
    if(count1%4!=0){
        min_taxi=min_taxi+1;
    }
 }

cout << min_taxi;

 return 0;
}
