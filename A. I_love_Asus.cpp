# include <iostream>
using namespace std;

int main (){

int n,i;
cin >>n;
int arr[n];
int amazed=0;

for(i=0;i<n;i++){
    cin >>arr[i];
}

int max_val=arr[0];
int min_val=arr[0];

for(i=1;i<n;i++){

    if(arr[i]>max_val){

        amazed+=1;
        max_val=arr[i];
    }

    else if(arr[i]<min_val){
        amazed+=1;
        min_val=arr[i];
    }

}

cout << amazed;

return 0;

}
