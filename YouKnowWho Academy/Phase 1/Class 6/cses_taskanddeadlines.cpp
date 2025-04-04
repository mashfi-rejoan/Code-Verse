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
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
    	int duration, deadline; cin >> duration >> deadline;
    	v.push_back(make_pair(duration, deadline));
    } 
    sort(all(v));
    ll ans = 0;
    ll x = 0;
    for(auto [duration, deadline] : v)
    {
    	x += 1LL * duration;
    	ans += 1LL * (deadline - x);
    }
    cout << ans << nl;

    return 0;
}