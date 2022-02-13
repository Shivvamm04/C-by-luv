/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int setBit(int num,int pos){
    return(num&(1<<pos)!=0);
}

void unique(int arr[],int n){
    int xoorsum=0;
    for (int i=0;i<n;i++){
        xoorsum=xoorsum^arr[i];
    }
    int temp= xoorsum;
    
    int setbit=0,pos=0;
    while(setbit!=1){
        setbit = xoorsum&1;
        pos++;
        xoorsum=xoorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(temp^newxor);
}

int main()
{
    int ary[9]={1,2,2,1,3,5,3,4};
   unique(ary,9);

    return 0;
}
