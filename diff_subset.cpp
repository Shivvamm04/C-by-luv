#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sub;
void subset(vector<int> &arr, int i,vector<int>&elm){
    
    if(i==arr.size()){
        // subset.push_back(elm);
        return;
    }

    elm.push_back(arr[i]);
    sub.push_back(elm); 
    subset(arr,i+1,elm);
}


int main(){
    int n= 3;
    cin>> n ;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        arr.push_back(x);
    }
    vector<int> elm ;
    // subset(arr,3,elm);
    // int i=-1;
    // int m = arr.size();
   for(int j=0;j<arr.size();){
       elm.clear();
       subset(arr,j,elm);
       j++;
   }

    for(auto i : sub){
        for(auto j:i){
            cout<< j ;
        }
        cout<<endl;
    }

}