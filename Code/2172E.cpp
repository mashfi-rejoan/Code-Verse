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



void solve() 
{
  string s; cin >> s;
  int j, k; cin >> j >> k;

  int i = 1;
  string sj, sk;
  do {
    if (i == j) sj = s;
    if (i == k) sk = s;
    i++;
  } while (next_permutation(all(s)));
  // trace(sj); trace(sk);

  int x = 0, y = 0;
  for (int i = 0; i < sz(s); i++) {
    if (sj[i] == sk[i]) x++;
  }
  for (int i = 0; i < sz(s); i++) {
    for (int j = 0; j < sz(s); j++) {
      if (sj[i] == sk[j] and i != j) y++;
    }
  }

  cout << x << "A" << y << "B\n";

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