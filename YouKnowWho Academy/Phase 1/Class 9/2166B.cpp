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

// #define lld long double

void solve() 
{
  int a, n, b; cin >> a >> n >> b;
  int x = a / b;
  int y = n - x;
  if (a == n) cout << 1 << nl;
  else if (b > a) cout << 2 << nl;
  else if (y <= 1) cout << 1 << nl;
  else cout << 2 << nl;
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