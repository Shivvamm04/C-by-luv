#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m ;
    cin >> n>> m;
    cout<<"m: "<<m<<endl;
    cout<<"n: "<<n<<endl;
    int c = (n^~(1<<7))+1;
    int d = c|(1<<31);
    cout<<c<<endl;
    cout<<d<<endl;

}