#include<bits/stdc++.h>
using namespace std;
const int N = 1e2+7;

vector<int> arr[N];
bool vis[N]={false};
vector<int> level;

void bfs(int vertex){
    // if(vis[vertex]) continue;
    queue<int> qu;
    qu.push(vertex);
    level.push_back(vertex);
    vis[vertex] = true;
    while (!qu.empty()){
        int x = qu.front();
         qu.pop();
    for(auto child : arr[x]){
        if(vis[child]) continue; 
        qu.push(child);
        level.push_back(child);
        vis[child]=true;


    }
}
    
}
// 10 9
// 1 2
// 1 4
// 1 5
// 2 3
// 2 6
// 4 8
// 5 7
// 5 9
// 6 10


int main(){
    int v,e;
    cin>> v >> e ;
    for(int i=0; i<(v-1);i++){
        int v1, v2;
        cin>> v1 >> v2;
        arr[v1].push_back(v2);
        arr[v2].push_back(v1);
    }

    bfs(1);
    for(auto vt : level){
        cout<< vt <<"\t";
    }
}