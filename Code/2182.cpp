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



void solve() 
{
  int x, y; cin >> x >> y;
  int a = x, b = y;
  vector<int> pow1, pow2;
  pow1.push_back(-1);
  pow2.push_back(-1);
  for (int i = 0; i <= 30; i++) {
    if (i & 1) {
      pow2.push_back(1LL << i);
    }
    else {
      pow1.push_back(1LL << i);
    }
  }
  auto temp_pow1 = pow1;
  auto temp_pow2 = pow2;
  // print(pow1); cout << nl;
  // print(pow2); cout << nl;
  int idx = 0, idy = 0;
  for (int i = 1; i <= 15; i++) {
    x -= pow1[i];
    temp_pow1[i] = x;
    if (x >= 0) idx = i;

    y -= pow2[i];
    temp_pow2[i] = y;
    if (y >= 0) idy = i;
  }
  vector<int> final(100);
  for (int i = 1; i <= 15; i++) {
    final[(2 * i) - 1] = temp_pow1[i];
    final[(2 * i)] = temp_pow2[i];
  }
  int ans1 = 0;
  for (int i = 1; i <= 80; i++) {
    if (final[i] < 0) break;
    ans1++;
  }

  temp_pow1 = pow1;
  temp_pow2 = pow2;
  for (int i = 1; i <= 15; i++) {
    b -= pow1[i];
    temp_pow1[i] = b;
    if (b >= 0) idx = i;

    a -= pow2[i];
    temp_pow2[i] = a;
    if (a >= 0) idy = i;
  }
  final.clear();
  for (int i = 1; i <= 15; i++) {
    final[(2 * i) - 1] = temp_pow1[i];
    final[(2 * i)] = temp_pow2[i];
  }
  int ans2 = 0;
  for (int i = 1; i <= 80; i++) {
    if (final[i] < 0) break;
    ans2++;
  }

  cout << max(ans1, ans2) << nl;
  

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