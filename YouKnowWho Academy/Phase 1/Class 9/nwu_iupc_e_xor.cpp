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

int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}

void solve() 
{
  int n; cin >> n;
  vector<int> v(n), power_two;
  for (int i = 0; i < n; i++) cin >> v[i];
  // power_two.push_back(1);
  int pow = 2;
  int p = 1;
  while (pow < n) {
    pow *= p;
    power_two.push_back(pow);
    p++;
  }
  sort(allr(power_two));
  // print(power_two); cout << nl;
  // print(v); cout << nl;

  // cout << (1 << 2) << nl;
  if (n == 2) power_two.push_back(2);
  
  for (int k = 0; k < power_two.size(); k++) {
    // print(v); cout << nl;
    int msb = __lg(power_two[k]);
    // trace(msb);
    // trace(power_two[k]);
    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++) {
      int x = v[i];
      // trace(x);
      bool flag = check_kth_bit(x, msb);
      // trace(flag);
      if (flag) {
        cnt++;
        // trace(cnt);
      }
      else if (flag == false) {
        mx = max(cnt, mx);
        cnt = 0;
      }
    }
    mx = max(cnt, mx);
    // trace(mx);
    int hlf = power_two[k] / 2;
    int cps = power_two[k];
    // trace(hlf);
    set<int> st;
    if (mx > hlf) {
      for (int i = 0; i < n; i++) {
        if (cps == 0) break;
        if (check_kth_bit(v[i], msb)) {
          v[i] ^= power_two[k];
          st.insert(i);
          cps--;
        }
      }
      for (int i = 0; i < n; i++) {
        if (cps == 0) break;
        if (check_kth_bit(v[i], msb) == false and st.find(i) == st.end()) {
          v[i] ^= power_two[k];
          cps--;
        }
      }
    }
    
  }
  // print(v); cout << nl;
  for (int i = 0; i < n; i++) {
    if (check_kth_bit(v[i], 0)) {
      v[i] ^= 1;
      break;
    }
  }

  int ans = 0;
  // print(v); cout << nl;
  for (auto u : v) ans += u;
  cout << ans << nl; 
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