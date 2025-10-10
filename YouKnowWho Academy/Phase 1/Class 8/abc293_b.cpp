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

  int n; cin >> n;
  vector<int> v(n + 10, 0);
  set<int> st;
  for (int i = 1; i <= n; i++) {
    st.insert(i);
  }
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    if (v[i] == 0) {
      v[x] = 1;
      if (st.find(x) != st.end()) st.erase(x);
    }
  }
  cout << st.size() << nl;
  print(st);
  cout << nl;

  return 0;
}