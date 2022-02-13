#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
//    int arr[n][2];
   vector<vector<int>> arr;
    int temp= INT_MIN;
    int count = 0;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<2;j++){
            int h;
            cin>> h;
          temp.push_back(h);
        }
        arr.push_back(temp);
    }
    int k = 0;
    for(int i=0;i<n;i++){
        // int x, y,a,b;
        // cin>> x >> y >> a >> b;
        int x = arr[k][0];
        int a = arr[k+1][0];
        int y = arr[k][1];
        int b = arr[k+1][1];
        int tm = x-a;
        k=k+2;
        if(tm>=temp){
            count++;
            temp=tm;
        }
        else{
            break;
        }
        // cout<<tm<<endl;
        tm = y-b;
         if(tm>=temp){
            count++;
            temp = tm;
        }
        else{
            break;
        }
        // cout<<tm<<endl;

    }
    cout<<count;
}
// 4
// 5
// 6
// 1
// 2
// 1
// 1
// 1
// 1

// 5
// 2
// 5
// 1
// 4
// 9
// 1
// 2
// 3
// 4
// 5

// 10
// 2
// 5
// 1
// 4
// 9
// 10
// 3
// 8
// 12
// 7
// 12
// 2
// 3
// 9
// 3
// 3
// 1
// 2
// 3
// 12




