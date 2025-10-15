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

const int mod = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> a(N), powerTwo(N), pref(N);

void mash() {
  powerTwo[0] = 1;
  for (int i = 1; i < N; i++) {
    powerTwo[i] = (powerTwo[i - 1] * 2) % mod;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  mash();

  int n; cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  sort(a.begin() + 1, a.begin() + n + 1);
  for (int i = 1; i <= n; i++) {
    pref[i] = pref[i - 1] + a[i];
  }
  int contrib_sum = 0;
  for (int i = 1; i <= n; i++) {
    contrib_sum = (((1LL * contrib_sum + (a[i] * (i - 1)) - pref[i - 1]) % mod) + mod) % mod;
  }
  int ans = (1LL * contrib_sum * powerTwo[n - 2]) % mod;
  cout << ans << nl;

  return 0;
}