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

bool is_ass (vector<int> &v) {
  for (int i = 0; i < (int)v.size() - 1; i++) {
    if (v[i] <= v[i + 1]) {
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}

bool is_des (vector<int> &v) {
  for (int i = 0; i < (int)v.size() - 1; i++) {
    if (v[i] >= v[i + 1]) {
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}

void solve() 
{
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  if (n == 2) {
    if (abs(v[0] - v[1]) <= 1) {
      cout << 0 << nl;
      return;
    }
    else {
      cout << -1 << nl;
      return;
    }
  }

  for (int i = 0; i < n - 1; i++) {
    if (abs(v[i] - v[i + 1]) <= 1) {
      cout << 0 << nl;
      return;
    }
  }

  if (is_ass(v) or is_des(v)) {
    cout << -1 << nl;
  }
  else {
    cout << 1 << nl;
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