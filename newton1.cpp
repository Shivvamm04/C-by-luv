#include<bits/stdc++.h>
using namespace std;


int fuc(int x , int y){
    int ans;
    int p=0;
    
    for(int i = 0 ; i<x;i++){
     ans = pow(3,i);
     p+=ans;
     
    }
    
    while(p<y){
        p+=x;
        
    }
    if(p==y){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int x=3,y=16;
    cout<<fuc(x,y);
}