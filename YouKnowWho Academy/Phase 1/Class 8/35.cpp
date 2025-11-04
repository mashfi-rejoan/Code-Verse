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

int ask(string &s) {
  cout << "? " << s << endl;
  int x; cin >> x;
  return x;
}

void solve() 
{
  int n; cin >> n;
  string s;
  for (int i = 0; i < n; i++) s += 'a';
  int v = ask(s);
  string ans;
  for (int i = 0; i < n; i++) {
    s[i] = 'z';
    int w = ask(s);
    for (char ch = 'a'; ch <= 'z'; ch++) {
      if (2 * ch - 'a' - 'z' == (v - w)) {
        ans += ch;
        break;
      }
    }
    s[i] = 'a';
  }
  cout << "! " << ans << endl;
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