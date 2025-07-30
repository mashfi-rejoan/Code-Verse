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

const int N = 1e5 + 9, MOD = 1e9 + 7;
int a[N];

// O(n square)
// int32_t main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   int n; cin >> n;
//   for (int i = 1; i <= n; i++) cin >> a[i];
//   sort (a + 1, a + n + 1);
  
//   int ans = 0;
//   for (int i = 1; i <= n; i++) {
//     for (int j = i + 1; j <= n; j++) {
//       int k = j - i - 1;
//       int diff = a[j] - a[i];
//       ans += (diff * (1 << k));
//     }
//   }
//   cout << ans << nl;

//   return 0;
// }

// O(n)
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  sort (a + 1, a + n + 1);
  
  int ans = 0;

  
  int mn = 0, mx = 0;;
  for (int i = 1; i <= n; i++) {
    //min
    int k = (n - i);
    mn += 1LL * (((1LL << (k % MOD)) % MOD) * (a[i] % MOD) % MOD);

    //max
    int kk = (i - 1);
    mx += 1LL * (((1LL << (kk % MOD)) % MOD) * (a[i] % MOD) % MOD);
  }

  ans = ((mx % MOD) - (mn % MOD) % MOD);
  cout << ans << nl;

  return 0;
}