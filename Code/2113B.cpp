/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define i128 __int128
#define int long long
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define CEIL(a, b) (((a) + (b) - 1) / (b))
#define print(x) for (auto u : (x)) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n"

void solve() {
    int w, h, a, b; cin >> w >> h >> a >> b;
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 > x2) swap(x1, x2);
    if (y1 > y2) swap(y1, y2);

    x1 += a; y1 += b;

    if (x2 - x1 >= 0 and (x2 - x1) % a == 0) yes;
    else if (y2 - y1 >= 0 and (y2 - y1) % b == 0) yes;
    else no;

    
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