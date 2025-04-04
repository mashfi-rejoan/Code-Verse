/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
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
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    } 
    sort(allr(v));
    int mid = (n - 1) / 2;
    int mid_value = v[mid];
    // cout << mid_value << nl;
    // print(v);
    // cout << nl;
    ll ans = 0;
    for(auto u : v)
    {
    	ans += 1LL * abs(u - mid_value);
    }
    cout << ans << nl;
    return 0;
}