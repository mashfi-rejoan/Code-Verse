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
  int n; cin >> n;
  string s; cin >> s;
  set<char> st;
  for (auto ch : s) {
    st.insert(ch);
  }
  if (st.size() == 1) {
    cout << n << nl;
    return;
  }
  int mid = n / 2;
  int ans = 1;
  char midCh = s[mid];
  for (int i = mid + 1; i < n; i++) {
    if (s[i] == midCh) ans++;
    else break;
  }
  for (int i = mid - 1; i >= 0; i--) {
    if (s[i] == midCh) ans++;
    else break;
  }
  cout << ans << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}