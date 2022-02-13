#include<bits/stdc++.h>
using namespace std;

void check(int *arr,int *ary,int n){
    int flag=0;

    for(int i =0;i<n;i++){
        if(arr[i]==ary[i]){
            flag=1;
        }
        
    }
    
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
   
    while (t--){
         int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ary[n];
        for(int i=0;i<n;i++){
            cin>>ary[i];
        }

        check(arr,ary,n);


    }
    
    
}