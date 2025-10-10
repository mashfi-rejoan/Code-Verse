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



void solve() 
{
  int n, k; cin >> n >> k;
  if (n * n - 1 == k) {
    no;
    return;
  }
  else {
    yes;
    int p = n * n - k;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (p >= 1) {
          if (i == 1 and j == 1) cout << 'R';
          else if (i == 1) cout << 'L';
          else cout << 'U';
          p--;
        }
        else cout << 'D';
      }
      cout << nl;
    }
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}