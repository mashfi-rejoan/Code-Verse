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

const int N = 109;
int a[N];

void solve() {
  int n; cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];

  int mx = LLONG_MIN, idx;
  // trace(mx);
  for (int i = 0; i < n; i++) {
    if (a[i] > mx) {
      mx = a[i];
      idx = i;
    }
  }


  int i = idx, j = idx;
  bool flag1 = false, flag2 = false;
  while (i >= 0 and j < n) { //o(n)
    set<int> st;
    int val;
    for (int start = i; start <= j; start++) { //o(n)
      a[start]--;
      st.insert(a[start]);
      if (st.size() >= 2) {
        cout << "No\n";
        return;
      }
      val = a[start];
    }
    // a[i]--;
    // int val = a[i]

    if (a[i - 1] == val) {
      i--;
      // flag1 = true;
      // flag2 = false;
    }
    else j++;
  }

  for (int i = 0; i < n; i++) {
    if (a[i] != 0) {
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}