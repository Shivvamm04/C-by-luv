#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sub;
void subset(vector<int> &arr, int i,vector<int>&elm){
    // for(auto et : arr){

    if(i==arr.size()){
        sub.push_back(elm);
        return;
    }

    subset(arr,i+1,elm);

    elm.push_back(arr[i]);
    subset(arr,i+1,elm);
    elm.pop_back();
// }
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
    subset(arr,0,elm);
    for(auto i : sub){
        for(auto j:i){
            cout<< j ;
        }
        cout<<endl;
    }

}