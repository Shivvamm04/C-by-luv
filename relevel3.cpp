#include<bits/stdc++.h>
using namespace std;

void check(int *arr,int n,int k){
    int great=0;
    for(int i=0;i<n;i++){
        int temp;
        temp = arr[i]%k;
        if(temp>great){
            great=temp;
        }

    }
    cout<<great<<endl;
    

}

int main(){
    int t;
    cin>>t;
   
    while (t--){
        int n,k;
        cin>> n >> k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        check(arr,n,k);
// 2
// 5 6
// 4 3 3 7 2
// 3 2
// 3 2 10

    }
    
    
}