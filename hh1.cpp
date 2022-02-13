#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int i;
        for(i = 0; i < n; i++)
            cin >> arr[i];
        long long ans = 0;
        for(int bit = 0; bit < 25 ; bit++){
            vector<int> vec;
            for(i = 0; i < n ; i++)
                vec.push_back((arr[i] >> bit)&1);

            for(i = 0; i < n ; i++){
                cout<<vec[i]<<"\t";
            }
            int j = n;
            while(j > 0 && vec[j - 1] == 1)
                j--;
            // [j, n-1] has all ones
            j = max(j, 1);
            cout<<j<<n<<endl;
            ans = ans + (n - j + 1)*1ll*(1 << bit);
            cout<<ans<<"\n";
            for(i = 1; i < n ; i++) // removing from 'i'
            {
                if(vec[i-1] == 0)
                    break;
                j = max(j, i + 1);
                ans = ans + (n - j + 1)*1ll*(1 << bit);
            }
        }
        ans = ans - (1ll << 25) + 1;
        cout << ans << '\n';
    }
}