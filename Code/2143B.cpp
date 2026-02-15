/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n, k; cin >> n >> k;
  vector<int> price(n), discount(k);
  for (int i = 0; i < n; i++) {
    cin >> price[i];
  }
  for (int i = 0; i < k; i++) {
    cin >> discount[i];
  }
  sort(allr(price));
  sort(all(discount));

  int ans = 0;
  int i = 0;
  for (auto& u : discount) {
    u--;
    while (u--) {
      if (i >= n) {
        cout << ans << nl;
        return;
      }
      ans += price[i];
      i++;
    }
    i++;
  }
  for (int p = i; p < n; p++) {
    ans += price[p];
  }
  cout << ans << nl;

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