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



void solve() 
{
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)  cin >> a[i];
  for (int i = 0; i < n; i++)  cin >> b[i];

  for (int i = 0; i < n - 1; i++) {
    if (a[i] == b[i]) continue;
    if ((a[i] ^ a[i + 1]) == b[i]) {
      a[i] = b[i];
    }
  }

  for (int i = n - 2; i >= 0; i--) {
    if (a[i] == b[i]) continue;
    if ((a[i] ^ a[i + 1]) == b[i]) {
      a[i] = b[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      cout << "no\n";
      return;
    }
  }
  cout << "yes\n";


  // for (int i = 1; i <= n; i++)  cout << a[i] << ' '; cout << nl;
  // for (int i = 1; i <= n; i++)  cout << b[i] << ' '; cout << nl;
  // for (int i = 1; i <= n; i++)  cout << (a[i] ^ a[i + 1]) << ' '; cout << nl;
  // for (int i = 1; i <= n; i++)  cout << (a[i] ^ b[i + 1]) << ' '; cout << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}