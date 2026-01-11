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

void solve() 
{
  vector<int> primes;
  for (int i = 2; i <= N; i++) {
    if ((int)primes.size() > 100) break;
    if (is_prime[i]) primes.push_back(i);
  }
  // print(primes); cout << nl;

  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (auto u : primes) {
    for (int i = 0; i < n; i++) {
      if (__gcd(u, a[i]) == 1) {
        cout << u << nl;
        return;
      }
    } 
  }
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  sieve();
  int t = 1;
  cin >> t;
  while(t--) solve();

  return 0;
}