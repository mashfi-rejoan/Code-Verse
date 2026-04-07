/*  
  In the name of Allah, the Most Gracious, the Most Merciful.  
*/

#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define sz(x) ((int)(x).size())
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define trace(x) cout << #x << ": " << x << " \n"
#define print(x) for (auto u : (x)) cout << u << ' '; cout << nl;
#define vecin(name, len) vector<int> name(len); for (auto &_ : name) cin >> _;

const int N = 1e6 + 9;
vector<int> freq(N + 9);

int ways(int n) {
  return ((n * (n - 1) * (n - 2))) / 6;
}


void solve() 
{
  int n; cin >> n;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    freq[v[i]]++;
  }

  for (int i = 1; i < N; i++) {
    for (int j = 2 * i; j < N; j += i) {
      freq[i] += freq[j];
    }
  }

  for (int i = 1; i < N; i++) {
    freq[i] = ways(freq[i]);
  }

  for (int i = N - 1; i >= 1; i--) {
    for (int j = 2 * i; j < N; j += i) {
      freq[i] -= freq[j];
    }
  }

  cout << freq[1] << nl;


}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  // cin >> t;
  while(t--) solve();

  return 0;
}