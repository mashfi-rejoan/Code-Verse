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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  map<char, int> mp;
  for (auto ch : s) {
    mp[ch]++;
  }
  for (auto [x, y] : mp) {
    if (mp[x] == 1) {
      cout << x << nl;
      return 0;
    }
  }

  return 0;
}