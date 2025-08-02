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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, y; cin >> n >> x >> y;
  // cin.ignore();
  string s; cin >> s;
  x--; y--;
  int a = s[x] - '0';
  int b = s[y] - '0';
  // trace(a); trace(b);
  if (a == 0 and b != 0 and a % b == 0) cout << "YES\n";
  else if (b == 0 and a != 0 and b % a == 0) cout << "YES\n";
  else if (a == 0 and b == 0) cout << "NO\n";
  else if (a != 0 and b != 0 and (a % b == 0 or b % a == 0)) cout << "YES\n";
  else cout << "NO\n";

  

  return 0;
}