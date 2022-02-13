#include<bits/stdc++.h>
using namespace std;

int abs(int n){
    if(n<0){
        n*=(-1);
    }
    return n;
}

int main(){
    int t;
    cin>> t ;
    vector<int>ans;
    while(t--!=0){
        int n;
        cin >> n ;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x); 
        }
        // vector<int> temp;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])<=2){
                //  temp.push_back(arr[j]);
                ;
                }
                else{
                    arr.erase(arr.begin()+j);
                    // n-=1;
                }
            }

        }
       
        int s = arr.size();
        ans.push_back(s);
    }
    for(int p:ans){
      cout<<p<<endl;
    }

    return 0;
}
