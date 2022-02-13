#include <bits/stdc++.h>
using namespace std;

vector<int> reverse_vec(vector<int>&ar){
    auto x = ar.begin();
    auto y = ar.end()-1;
     while (x < y)
    {
        int temp = *x;
        *(x) = *(y);
        *(y) = temp;
        x++;
         y--;
    }   

    return ar;
}

// { for (int i = 0, j = ar.size() - 1; i < j; i++, j--)
//     {
//         int temp = ar[i];
//         ar[i] = ar[j];
//         ar[j] = temp;

//     }
//     return ar;
// }


int main()
{
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(0);

    reverse_vec(arr);

    for(auto p=arr.begin();p<arr.end();p++){
        cout<<*p;
    }

    // cout<<*arr.begin();
}