#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
const int INF = 1e5+10;
vector<pair<int, int>> g[N];
vector<int> dist(N,INF);
vector<bool> vis(N,false);

void dijkstra(int source){
    set<pair<int,int>> st;
    st.insert({0,source});
     
    dist[source] = 0;
    while(st.size()>0){
        auto node = *st.begin();
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v] = true;
        for(auto child : g[v]){
            int child_v = child.first;
            int wt = child.second;
            if(dist[v] + wt < dist[child_v]){
                dist[child_v]=dist[v]+wt;
                st.insert({dist[child_v],child_v});
            }
        }
    }

}

int main(){
    int n,e;
    cin>> n >> e;
    for(int i=1;i<=e;i++){
        int v1,v2,wt;
        cin>> v1 >> v2 >> wt;
        g[v1].push_back({v2,wt});

    }
dijkstra(1);
cout<<"\n";
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<"\t";
    }
}