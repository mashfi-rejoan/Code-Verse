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
    vector<int> v(n), prefix(n + 1);
    for(int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    prefix[0] = 0;
    for(int i = 1; i <= n; i++)
    {
      prefix[i] = prefix[i - 1] + v[i - 1];

      prefix[i] = prefix[i] % n;
      prefix[i] = (prefix[i] + n) % n;
    }

    ll ans = 0;
    map<int, int> mp;
    mp[0]++;
    for(int i = 1; i <= n; i++)
    {
      int need = prefix[i];

      ans += mp[need];

      int cur = prefix[i];
      mp[cur]++;
    } 

    cout << ans << nl;
    return 0;
}