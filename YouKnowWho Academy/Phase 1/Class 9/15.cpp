/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define i128 __int128
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 


void solve() 
{
  string a; cin >> a;
  int b; cin >> b;
  if (b < 0) b = abs(b);
  if (a[0] == '-') a.erase(a.begin());
  int ans = 0;
  for (auto ch : a) {
    ans = (ans * 10 % b + (ch - '0')) % b;
  }

  if (ans == 0) cout << "divisible\n";
  else cout << "not divisible\n";
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1, cs = 0;
  cin >> t;
  while(t--) {
    cout << "Case " << ++cs << ": ";
    solve();
  }

  return 0;
}