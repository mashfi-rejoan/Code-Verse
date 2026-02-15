/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  int n, l, r; cin >> n >> l >> r;
  int item = 0;
  vector<int> v(n + 5), pref(n + 5);

  
  for (int i = 1; i <= n; i++) {
    pref[i] = i;
  }
  pref[r] = pref[l - 1];
  for (int i = 1; i <= n; i++) {
    v[i] = pref[i] ^ pref[i - 1];
    cout << v[i] << ' ';
  }
  cout << nl;
  
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}