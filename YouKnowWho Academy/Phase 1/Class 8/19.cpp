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

int cnt[30][2];

void solve() 
{

  for (int k = 0; k < 30; k++) {
    cnt[k][0] = 0;
    cnt[k][1] = 0;
  }
  int n; cin >> n;
  vector<int> v(n + 1), pref_xor(n + 1);
  for (int i = 1; i <= n; i++) cin >> v[i];
  pref_xor[0] = 0;
  for (int i = 1; i <= n; i++) {
    pref_xor[i] = pref_xor[i - 1] ^ v[i];
  }
  for (int k = 0; k < 30; k++) {
    int cur_bit = (pref_xor[0] >> k) & 1;
    if (cur_bit == 0) {
      cnt[k][0]++;
    }
    else {
      cnt[k][1]++;
    }
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int k = 0; k < 30; k++) {
      int cur_bit = (pref_xor[i] >> k) & 1;
      if (cur_bit == 0) {
        ans += (1LL * cnt[k][1] * (1 << k));
      }
      else {
        ans += (1LL * cnt[k][0] * (1 << k));
      }
    }
    for (int k = 0; k < 30; k++) {
      int cur_bit = (pref_xor[i] >> k) & 1;
      if (cur_bit == 0) {
        cnt[k][0]++;
      }
      else {
        cnt[k][1]++;
      }
    }
  }
  cout << ans << nl;
  

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}