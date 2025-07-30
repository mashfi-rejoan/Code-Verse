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

int fib[12] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144};

void solve() 
{
  int n, m; cin >> n >> m;
  while (m--) {
    int x, y, z; cin >> x >> y >> z;
    vector<int> v;
    v.push_back(x); v.push_back(y); v.push_back(z);
    sort(all(v));
    if (fib[n - 1] <= v[0] and fib[n - 1] <= v[1] and fib[n] <= v[2]) {
      cout << 1;
    }
    else cout << 0;
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