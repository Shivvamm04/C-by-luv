#include<bits/stdc++.h>
using namespace std;

void merge(int low, int mid, int high, int arr[]){
    // int i=low, j=mid+1, k=low;
    int m = (mid-low)+1;
    int n = (high-mid);
    // cout<<m+n<<" "<< low<<" "<<high;
    int arr1[m];
    int arr2[n];
    for(int b=0; b<m; b++){
        arr1[b] = arr[low+b];
        // cout<<" arr1 "<< arr1[b];
    }
    for(int a=0; a<n; a++){
        arr2[a] = arr[mid+1+a];
        // cout<< " arr2 "<<arr2[a];
    }
    // cout<< low <<" "<<high<<" "<<mid<<endl;

    int i = 0;
    int j = 0;
    int k = low;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }
        else{
            arr[k++] = arr2[j++];
        }
    }
    if(i!=m){
        for(;i<m;i++){
            arr[k++] = arr1[i];
        }
    }
    if(j!=n){
        for(; j<n; j++){
            arr[k++] = arr2[j];
        }
    }
    // cout<< i <<" "<<j<<" "<<k<<endl;
}

void merge_sort(int low, int high, int arr[]){
    if(low==high){
         return;
    } 
        int mid = (low+high)/2;
        merge_sort(low,mid,arr);
        merge_sort(mid+1,high,arr);
        // cout<<low<<" "<<high<<" "<<mid<<" "<<endl;
        merge(low, mid, high, arr);
    
}

int main(){
    int arr[] = {5,4,3,10,14,1,55,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ary[n];
    merge_sort(0,n-1,arr);

    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }

    return 0;
}