#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<pair<int,string>> p;
   int n;
   cin>> n;
   for(int i=0;i<n;i++){
       int x;
       string y;
       pair<int,string> temp;
       cin>> x >> y;
       temp=make_pair(x,y);
       p.push_back(temp);
   }
   for(auto &pr : p){
       cout<<pr.first<<" "<<pr.second<<endl;
   }
    
}
// i/p
// 3
// 1 shivam
// 2 pravin
// 3 vipin

// o/p
// 1 shivam
// 2 pravin
// 3 vipin