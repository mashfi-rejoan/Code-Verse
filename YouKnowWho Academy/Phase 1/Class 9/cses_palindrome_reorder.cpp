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
#define print(x) for(auto u : x) cout << u 
#define trace(x) cout << #x << ": " << x << " \n"; 



void solve() 
{
  string s; cin >> s;
  map<char, int> mp;
  for (auto ch : s) mp[ch]++;
  int odd = 0;
  char odd_ch;
  bool flag = false;
  for (auto [ch, cnt] : mp) {
    // cout << ch << ' ' << cnt << nl;
    if (cnt % 2 != 0) {
      odd++;
      odd_ch = ch;
      flag = true;
    }
  }
  if (odd >= 2) {
    cout << "NO SOLUTION\n";
    return;
  }
  int sz = s.size();
  // vector<char> vc(sz);
  string vc = s;
  if (flag) {
    vc[sz / 2] = odd_ch;
    mp[odd_ch]--;
  }
  int l = 0, r = sz - 1;
  for (auto [ch, cnt] : mp) {
    // cout << ch << ' ' << cnt << nl;

    while (cnt >= 2 and l < r) {
      vc[l] = ch;
      vc[r] = ch;
      l++;
      r--;
      cnt -= 2;
    }
  }
  print(vc); cout << nl;
  
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}