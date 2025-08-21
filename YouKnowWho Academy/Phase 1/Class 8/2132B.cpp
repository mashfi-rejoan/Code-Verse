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
  vector<int> v;
  int p = 1;
  while (p <= n) {
    p = p * 10;
    p++;
    // trace(p);
    if (n % p == 0) v.push_back(n / p);
    p--;
  }
  sort(all(v));
  if (v.empty()) {
    cout << 0 << nl;
    return;
  }
  cout << v.size() << nl;
  print(v); 
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