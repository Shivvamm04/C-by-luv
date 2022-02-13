#include<bits/stdc++.h>
using namespace std;

void check_sort(int *arr,int n){
    int count = 1;
    int flag=0;
    for(int j=0;j<n;j++){
        if(j==0){
          continue;
        }
            if(arr[j]>arr[j-1]){
                ;
            }
            else{
                if(count>0){
                    swap(arr[j],arr[j-1]);
                    count--;
                }
                else{
                    flag=1;
                }
            }
        }
    
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

        check_sort(arr,n);


    }
    
    
}