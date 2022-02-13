#include<bits/stdc++.h>
using namespace std;

int main(){
    string letter = "abc";
    int n=letter.size();
    
int count=0;
vector<string>arr[n];
vector<string>ary[n];
for(int i =0; i<n;i++){
    string temp ;
    
    for(int j=i;j<i+n;j++){
        if((j)<n){
        // cout<< i << " " << j <<"\t";
        //  cout<< letter[j]<<"\t";
         temp.push_back(letter[j]);
        }
        else{
        //  cout<<(j-n)<<"\t";
        //  cout<< letter[j-n]<<"\t";
         temp.push_back(letter[j-n]);
        }
    }
  count++;
//   cout<<temp<<endl;
  arr[i].push_back(temp);
  reverse(temp.begin(),temp.end());
  ary[i].push_back(temp);


// int flag=1;
//   for(int j =0; j<i;j++){
//       for(string str : arr[j]){
//           if(str==temp){
//               flag=0;
//           }
//       }
//   }
//   if(flag==1){
//       count++;
//   }
//   cout<<temp<<endl;
 
}
// cout<<count<<endl;
int flag = 0;
for( int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(ary[i]==arr[j]){
           flag = 1;
        }
    }
    if(flag==0){
        count++;
    }
}

cout<<count<<endl;





    // for(int i =0; i<3;i++){
    //     for(int j=i;j<i+3;j++){
    //         if(j<3){
    //          cout<<letter[j];
    //         }
    //         else{
    //           cout<<letter[6-j];
              
    //         }
    //     }
        
    // }
}