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

const int N = 2e5;

void solve() 
{
  int n; cin >> n;
  string a = "0", b = "0";
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    a += (x + '0');
  }
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    b += (x + '0');
  }
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());
  bitset<N> bs_a(a), bs_b(b);
  // trace(0);
  // trace(bs_a);
  // trace(bs_a.count());
  // trace(bs_b);
  // trace(bs_b.count());
  for (int i = 1; i <= n; i++) {
    // odd er jonno - a1
    if (i & 1) {
      // cout << "ODDtrue\n";
      if (bs_a.count() % 2 == 0) {
        // cout << "ODDtrue\n";
        int temp = bs_a[i];
        bs_a[i] = bs_b[i];
        bs_b[i] = temp;
      }
    }
    else {
      if (bs_b.count() % 2 == 0) {
        // cout << "EVENtrue\n";
        int temp = bs_a[i];
        bs_a[i] = bs_b[i];
        bs_b[i] = temp;
      }
    }
    // trace(i);
    // trace(bs_a);
    // trace(bs_a.count());
    // trace(bs_b);
    // trace(bs_b.count());
  }
  // trace(bs_a);
  // trace(bs_a.count());
  // trace(bs_b);
  // trace(bs_b.count());
  int x = bs_a.count() % 2;
  int y = bs_b.count() % 2;
  if (x == y) cout << "Tie\n";
  else if (x == 1) cout << "Ajisai\n";
  else cout << "Mai\n";
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