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

const int N = 1e6 + 9;
int d[N];

void count_divisor() {
  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
      d[j] += i;
    }
  }
}

bool is_prime(int n) {
  if (n == 1) return false;
  for (int i = 2; (1LL * i * i) <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

void solve() 
{
  int l, r; cin >> l >> r;
  int cnt = 0;
  for (int i = l; i <= r; i++) {
    if (is_prime(d[i])) cnt++;
  }
  cout << cnt << nl;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  count_divisor();
  int t; cin >> t;
  while(t--) solve();

  return 0;
}