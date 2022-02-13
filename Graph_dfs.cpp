#include<bits/stdc++.h>
using namespace std;
 
const int N = 1e2+7;
int matrix[N][N];

vector<int> arr[N];
bool visited[N];

void dfs(int vertex){

    cout<<endl <<vertex <<endl;
    visited[vertex]=true;
    for( int child : arr[vertex]){
        cout<<"vertex: "<< vertex <<"child: "<< child<<"\t";
        if (visited[child]) continue;
        dfs(child);
    }

}

int main(){
int m,n;
cin>> m >> n ;
for(int i=0;i<n;i++){
    int v1,v2;
    cin>> v1 >> v2;
    matrix[v1][v2] = 1;

    arr[v1].push_back(v2);
    arr[v2].push_back(v1);

}

for(int i= 1 ; i<=m;i++){
    for (int j=1;j<=m;j++){
        if(matrix[i][j]==1){
            cout<< i << "," << j<<"\t" ;
    }
    }
}
 cout<<endl;

for (int i = 1 ; i<=m; i++){
for(auto edge : arr[i]){
   cout<< i << edge<<"\t";
}
}

dfs(3);

}