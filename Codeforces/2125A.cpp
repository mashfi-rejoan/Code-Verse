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

bool is_ok(string &s, string &b, string &c) {
  return (s.find(b) != std::string::npos || s.find(c) != std::string::npos);
}

void solve() 
{
  string s; cin >> s;
  string a = "FFT", b = "NTT";
  vector<char> vc;
  if (is_ok(s, a, b)) {
    for (auto ch : s) {
      vc.push_back(ch);
    }
    sort(allr(vc));
    for (auto ch : vc) cout << ch;
      cout << nl;
  }
  else {
    cout << s << nl;
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