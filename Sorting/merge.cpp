#include<bits/stdc++.h>
using namespace std;

int * merge(int arr[], int ary[], int array[], int m,int n, int ml){
    // int ml = m+n;
    // int array[ml];
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(arr[i]<ary[j]){
            array[k++] = arr[i++];
        }
        else{
            array[k++] = ary[j++];
        }
    }
    if(i!=m){
        for(;i<m;i++){
            array[k++] = arr[i];
        }
    }
    if(j!=n){
        for(; j<n; j++){
            array[k++] = ary[j];
        }
    }
return array;
    
}

int main(){
    int arr[] = {1};
    int ary[] = {2,3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(ary)/sizeof(ary[0]);
    int ml = m+n;
    int array[ml];

    int * arra= merge(arr,ary,array,m,n,ml);

    for(int i=0; i<ml; i++){
       cout<<*(arra+i)<<" ";
   }

    return 0;
}