#include<bits/stdc++.h>
using namespace std;

int partition(int l, int h,int arr[]){
    int p = l;
    int i = l;
    int j = h;
    // cout<< p<<" "<<i<<" "<<j<<" ";
    while(i<=j){
        while(arr[p]>=arr[i]){
            i++;
        }
        while(arr[p]<arr[j]){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[p]);
    // cout<<j<<" ";
    return j;
}

void quick_sort(int l, int h, int arr[]){
    if(l<h){
        int pivot = partition(l, h, arr);
        quick_sort(l,pivot-1,arr);
        quick_sort(pivot+1, h,arr);
    }
}

int main(){
    int arr[] = {2,5,6,7,3,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick_sort(0,n-1,arr);
     
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}