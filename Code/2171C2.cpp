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
  for (int k = 20; k >= 0; k--) {
    if ((x1 & (1 << k)) == (x2 & (1 << k))) continue;
    int lmv = 0;
    for (int i = 1; i <= n; i++) {
      bool setA = (a[i] & (1 << k));
      bool setB = (b[i] & (1 << k));
      if (setA != setB) {
        lmv = i;
      }
    }
    if (lmv) {
      if (lmv & 1) {
        cout << "Ajisai\n";
        return;
      }
      else {
        cout << "Mai\n";
        return;
      }
    }
  }
  cout << "Tie\n";
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