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

int lim = 1e3;
vector<int> pre(lim + 9), pref_sum(lim + 9);

void solve() 
{
  int k; cin >> k;
  if (k < 0) cout << 0 << nl;
  else cout << pref_sum[k] << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  for (int i = -lim; i <= lim; i++) {
    for (int j = -lim; j <= lim; j++) {
      int x = i * i + j * j;
      if (x <= lim) pre[x]++;
    }
  }
  pref_sum[0] = pre[0];
  for (int i = 1; i <= lim; i++) {
    pref_sum[i] = pref_sum[i - 1] + pre[i];
  }

  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}