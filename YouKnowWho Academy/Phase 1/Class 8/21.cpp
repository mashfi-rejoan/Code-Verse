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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, p; cin >> n >> p;
  vector<int> v(n);
  map<int, int> l, r;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    r[v[i]]++;
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int s = v[i];
    r[s]--;
    if (v[i] % p != 0) {
      l[s]++;
      continue;
    }
    int f = s / p;
    int t = 1LL * s * p;
    ans += (1LL * l[f] * r[t]);
    l[s]++;
  }
  cout << ans << nl;

  return 0;
}


//sub problem: i i j j => combination possible? - i * j