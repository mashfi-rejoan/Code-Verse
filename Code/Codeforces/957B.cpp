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

using namespace std;



void solve()
{
    int n, k; cin >> n >> k;
    vector<int>v(k);
    for(int i = 0; i < k; i++)
    {
       cin >> v[i];
    }
    int count_of_1 = count(all(v), 1);
    // cout << count_of_1 << nl;
    if(count_of_1 == k) 
    {
    	cout << (k - 1) << nl;
    	return;
    }
    sort(v.rbegin(), v.rend());
    k -= count_of_1;
    v.resize(k);
    ll ans = count_of_1;
    for(int i = 1; i < v.size(); i++)
    {
    	ans += (1LL * 2 * v[i] - 1);
    }
    cout << ans << nl;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}