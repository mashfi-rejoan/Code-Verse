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
#define CEIL(a, b) (((a) + (b) - 1) / (b))

void solve() 
{
  int n; cin >> n;
  string s; cin >> s;
  int cnt11 = 0, cnt00 = 0; 
  int i = 0;
  while (i < n - 1) {
    if (s[i] == '0' and s[i + 1] == '0') {
      cnt00++;
    }
    else if (s[i] == '1' and s[i + 1] == '1') {
      cnt11++;
    }
    i++;
  }
  // trace(cnt00);
  // trace(cnt11);
  if (cnt11 >= cnt00) cout << 0 << nl;
  else {
    int bad = cnt00 - cnt11;
    cout << CEIL(bad, 2) << nl;
  }
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