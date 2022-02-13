#include<bits/stdc++.h>
using namespace std;

// int arr[N];
// arr[0]=arr[1]=0;
// for(int i = 2;i<N;i++){
//     int flag = 0;
//     for(int j = 2;j<N;j++){
//         if(i%j==0){
//             flag = 1;
//         }
//         if(flag==0){
//             arr[i] = 1;
//         }
//         else{
//             arr[i]=0;
//         }
//     }

// }
int fun(int N){

    int arr[N];
arr[0]=arr[1]=0;
arr[2]=1;
for(int i = 2;i<N;i++){
    int flag = 0;
    for(int j = 2;j<i;j++){
        if(i%j==0){
            flag = 1;
        }
    }
        if(flag==0){
            arr[i] = 1;
        }
        else{
            arr[i]=0;
        }
    

}

    float n = N;
    float ans=0;
  for(int i=1;i<=N;i++){
      if(N%i==0){
       ans+=i;
      }
  }

 float d = ((3*n)/2);

  if(ans==d){
      if(arr[N]==1){
          return 1;
      }
      else{
          return 0;
      }
  }
  else{
      return 0;
  }
}



int main(){
    int n= 9;
    cout<<fun(n);
}