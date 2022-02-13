#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e3+7;
long arr[N][N];

int main() {
    int n,q;
    cin>> n >> q;
    for (int i=0;i<n;i++){
        int m;
        cin>> m;
        for(int j = 0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    while(q--){
    int r,t;
    cin>> r >> t;
    cout<< arr[r][t]<<endl;
    }  
    return 0;
}