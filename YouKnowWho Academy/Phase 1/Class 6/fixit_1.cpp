/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n), suffix_sum(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    } 
    suffix_sum[n - 1] = v[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        suffix_sum[i] = v[i] + suffix_sum[i + 1];
    }
    // print(suffix_sum);
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        ans += v[i] * suffix_sum[i + 1];
    }
    cout << ans << nl;
    return 0;
}