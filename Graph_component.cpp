#include<bits/stdc++.h>
using namespace std;
const int N = 1e2+7;
vector<int> arr[N];

bool vis[N];

void dfs(int n){
	
	if(vis[n]!=true){
	vis[n] = true;
	for(int child : arr[n]){
		dfs(child);
	}
	
	}
    
	
}

int main(){
	int n , e;
	cin>> n >> e ;
	for(int i=0;i<e;i++){
		int v1, v2;
		cin>> v1 >> v2;
		arr[v1].push_back(v2);
		arr[v2].push_back(v1);
	}
    int ct=0;
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
        dfs(i);
        ct++;
	}
    cout<<ct<<endl;
}