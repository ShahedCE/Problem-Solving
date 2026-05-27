# include <iostream>
using namespace std;

int main(){

int n;
int count1=0;
int count2=0;
cin >> n;
int arr[n];
bool flag=false;


for(int i=1;i<=n;i++){

    cin >> arr[i];
}
for(int i=1;i<=n;i++){


    if(arr[i]%2==0){
      count1++;
      if( count1>=2 ){
            if (i<=n-1){
        if(arr[i+1]%2!=0){
            cout << i+1 ;
          flag=true;
          break;
        }
            }
        else if(arr[i-1]%2!=0){
            cout << i-1 ;
            flag=true;
            break;
        }
        if(arr[i-2]%2!=0){
            cout << i-2 ;
            flag=true;
            break;
        }
      }

    }
    if(arr[i]%2!=0){
      count2++;
      if( count2>=2  ){
         if (i<=n-1){
        if(arr[i+1]%2==0){
            cout << i+1;
            flag=true;
            break;

        }

        else if(arr[i-1]%2==0){
            cout << i-1 ;
            flag=true;
            break;
        }
        if (arr[i-2]%2==0){
            cout << i-2 ;
            flag=true;
            break;

        }

      }
      }

    }
if (flag==true){
    break;
}

}

 return 0;
}
