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

string concatenate(int x) {
  string lastFour = "";
  int it = 0;
  while (x > 0) {
    if (it > 3) break;
    it++;
    auto s = to_string((x % 10));
    lastFour += s;
    x /= 10;
  }
  reverse(all(lastFour));
  return lastFour;
}

void solve() 
{
  int n; cin >> n;
  if (n > 20) {
    cout << string(4, '0') << nl;
    return;
  }
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  string ssAns = concatenate(ans);
  int sz = (int)ssAns.size();
  if (sz < 4) {
    cout << string(4 - sz, '0') << ssAns << nl; 
  }
  else {  
    print(ssAns); cout << nl;
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