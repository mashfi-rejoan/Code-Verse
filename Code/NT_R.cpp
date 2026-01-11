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

bool is_sorted(vector<int> v) {
  for (int i = 0; i < (int)v.size(); i++) {
    if (v[i] > v[i + 1]) return false;
  }
  return true;
}

void solve() 
{
  int n; cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) cin >> v[i];
  for (int i = 1; i <= n - 1; i++) {
    if (v[i] > v[i + 1]) {
      if (__gcd(v[i - 1], v[i]) > v[i + 1]) {
        no;
        return;
      }
      else {
        v[i] = __gcd(v[i - 1], v[i]);
      }
    }
  }
  yes;

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