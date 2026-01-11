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
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for(auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"; 

const int MAX = 2e5 + 9;
vector<bool> is_prime(MAX + 1, true);
vector<int> primes;
set<int> sq;

void sieve() {
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i * i <= MAX; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= MAX; j += i) {
        is_prime[j] = false;
      }
    }
  }
  for (int i = 2; i <= MAX; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      sq.insert(1LL * i * i);
    }
  }
}

void solve() 
{
  int x; cin >> x;
  if (x < 38) {
    no;
    return;
  }
  int n = primes.size();
  
  for (int i = 0; i < n; i++) {
    int a = 1LL * primes[i] * primes[i];
    if (a >= x) break;
    for (int j = i + 1; j < n; j++) {
      int b = 1LL * primes[j] * primes[j];
      if (a + b >= x) break;
      int p = x - (a + b);
      if (a != b and a != p and sq.find(p) != sq.end()) {
        yes;
        return;
      }
    }
  }
  no;
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


