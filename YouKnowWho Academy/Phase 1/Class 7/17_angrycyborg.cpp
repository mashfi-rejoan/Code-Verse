/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 

const int N = 1e5 + 9;
int L[N], R[N];

void solve() 
{
  int n, q; cin >> n >> q;
  vector<int> v(n + 2, 0), prefix(n + 2), ans(n + 2);
  for (int i = 1; i <= q; i++) {
    int l, r; cin >> l >> r;
    L[i] = l, R[i] = r;
    v[l]++;
    v[r + 1]--;
  }
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + v[i];
  }
  // print(prefix);
  for (int i = 1; i <= q; i++) { 
    prefix[R[i] + 1] -= (R[i] - L[i] + 1);
    // cout << R[i] << ' ' << L[i] << nl;
  }
  // print(prefix);
  for (int i = 1; i <= n; i++) {
    ans[i] = ans[i - 1] + prefix[i];
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << ' ';
  }
  cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}