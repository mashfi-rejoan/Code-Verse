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

const int N = 1e6 + 9;
vector<int> is_prime(N + 1, 1);
vector<int> pref(N + 1);

void sieve() {
  is_prime[0] = is_prime[1] = 0;
  for (int i = 2; i * i <= N; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= N; j += i) {
        is_prime[j] = 0;
      }
    }
  }
  // print(is_prime);
}
void pre_calc() {
  for (int i = 2; i <= N; i++) {
    pref[i] = pref[i - 1] + is_prime[i];
  }
  // print(pref); cout << nl;
}

void solve() 
{
  int q; cin >> q;
  while (q--) {
    int l, r; cin >> l >> r;
    cout << pref[r] - pref[l - 1] << nl;
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  sieve();
  pre_calc();

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}