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
  int a = -1, b = -1, c = -1;
  for (int i = 2; (i * i) <= n; i++) {
    if (n % i == 0) {
      a = i;
      int m = n / i;
      for (int j = a + 1; (j * j) <= m; j++) {
        if (m % j == 0) {
          b = j;
          c = m / j;
          if (a != b and b != c and a != c) {
            cout << "YES\n" << a << ' ' << b << ' ' << c << nl;
            return;
          }
        }
      }
    }
  }
  cout << "NO\n"; 
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}