/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n" 



void solve() 
{
  int n, k; cin >> n >> k;
  multiset<int> ms;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ms.insert(x);
  }
  vector<int> temp;
  int s = 0, ans = 0;
  while(sz(temp) < n) {
    int val = k - (s % k);
    auto it = prev(ms.end());
    if (*it >= val) {
      ans += *it;
      s += *it;
      temp.push_back(*it);
      ms.erase(it);
    }
    else {
      auto it = ms.begin();
      s += *it;
      temp.push_back(*it);
      ms.erase(it);
    }
  } 
  cout << ans << nl;
  print(temp); cout << nl;
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