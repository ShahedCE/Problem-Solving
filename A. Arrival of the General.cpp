# include <iostream><algorith>
using namespace std;

 int main (){

    int n;
    cin >> n;
    int A[n],max_hight=0,min_hight=100,max_index,min_index;

    for(int i=0;i<n;i++){
        cin >> A[i];
    }
   for(int i=0;i<n;i++){
        if(A[i]>max_hight){  // To find the index of maximum hight,let max_hight=0 //
            max_hight=A[i];
            max_index=i;
        }

        if(A[i]<=min_hight){
            min_hight=A[i];     // To find the index of minimum hight,let min_hight=100 //
            min_index=i;
        }
    }

    if(max_index>min_index){
        min_index++;
    }
    cout << max_index+(n-1-min_index);

     return 0;
 }
