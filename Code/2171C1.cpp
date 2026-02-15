/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n; cin >> n;
  vector<int> a(n + 1), b(n + 1);
  int x1 = 0, x2 = 0;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    x1 ^= a[i];
  }
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
    x2 ^= b[i];
  }
  if (x1 == x2) {
    cout << "Tie\n";
    return;
  }

  int lma = 0, lmb = 0;
  for (int i = 1; i <= n; i++) {
    if (i & 1 and a[i] ^ b[i]) {
      lma = i;
    }
    else if (a[i] ^ b[i]) lmb = i;
  }

  // trace(ajisai);
  // trace(mai);
  if (lma > lmb) cout << "Ajisai\n";
  else cout << "Mai\n";
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