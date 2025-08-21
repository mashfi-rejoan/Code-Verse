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
  int n, k; cin >> n >> k;
  vector<int> s, t;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    s.push_back(x % k);
  }
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    t.push_back(x % k);
  }
  sort(all(s));
  sort(all(t));
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      cout << "no\n";
      return;
    }
  }
  cout << "yes\n";

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}