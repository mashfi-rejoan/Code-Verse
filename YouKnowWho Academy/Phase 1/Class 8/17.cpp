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

const int N = 1e5 + 9, MAX_VAL = 4e3 + 9;
int a[N], b[N];
bitset<MAX_VAL> pref_mask_a[N], pref_mask_b[N];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, q; cin >> n >> m >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= m; i++) {
    cin >> b[i];
  }

  pref_mask_a[0].reset();
  for (int i = 1; i <= n; i++) {
    pref_mask_a[i] = pref_mask_a[i - 1];
    pref_mask_a[i].flip(a[i]);
  }
  pref_mask_b[0].reset();
  for (int i = 1; i <= m; i++) {
    pref_mask_b[i] = pref_mask_b[i - 1];
    pref_mask_b[i].flip(b[i]);
  }
  while (q--) {
    int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
    auto subA = (pref_mask_a[r1] ^ pref_mask_a[l1 - 1]);
    auto subB = (pref_mask_b[r2] ^ pref_mask_b[l2 - 1]);
    auto merged_mask = (subA ^ subB);
    int ans = merged_mask.count();
    cout << ans << nl;
  }


  return 0;
}