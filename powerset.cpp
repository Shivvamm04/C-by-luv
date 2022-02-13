#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;
void powerset(vector<int> &subset,int i, vector<int> &num){
    if(i==num.size()){
    subsets.push_back(subset);
        return;
    }

    powerset(subset,i+1,num);

    subset.push_back(num[i]);
    powerset(subset,i+1,num);
    subset.pop_back();

}

int main(){
    int n;
    cin>> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;
        cin>> x;
        nums.push_back(x);
    }
    vector<int> empty;
    powerset(empty,0,nums);

    for(auto pr:subsets){
        for(auto p: pr){
           cout<<p<<" ";
        }
        cout<<endl;
    }
}