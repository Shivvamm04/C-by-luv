#include<bits/stdc++.h>
using namespace std;




int main(){
    int arr[6][6] ={{3, 7, -3, 0, 1, 8},
{1, -4, -7, -8, -6, 5},
{-8, 1,3,3, 5, 7},
{-2, 4, 3, 1, 2, 7},
{2, 4, -5, 1, 8, 4},
{5, -7, 6, 5, 2, 8}};

    //  for(int i = 0; i<6;i++){
    //      for(int j=0;j<6;j++){
    //          cout<<arr[i][j]<<"\t";
    //      }
    //      cout<<"\n";
    //  }
    int p=0,total=-1000;
    while ((p+3)<=6)
    {
        int temp[4]={0,0,0,0};
        for(int i=p,l=0;i<p+3;i++,l++){
            int q=0;
            
            while ((q+3)<=6)
            {  
               for(int j=q,k=0;j<(q+3);j++,k++){
                if(l==1){
                   if(k==1&&l==1){
                    temp[q]+=arr[p+1][q+1];
                    // cout<<arr[p+1][q+1]<<" ";
                    }
                }
                else{
                temp[q]+=arr[i][j];
               
                }
                cout<<arr[i][j];
               } 
               cout<<"\t"; 
               q++;
            } 
            // for(int h=0;h<4;h++){cout<<temp[h]<<"\t";}
            cout<<"\n";  
        }
         cout<<"\n";
        // for(int h=0;h<4;h++){cout<<temp[h]<<"\t";}
        for(int a=0;a<4;a++){
            if(total<temp[a]){
            total = temp[a];}
        }
        p++;
    }
    
   cout<<total;
}