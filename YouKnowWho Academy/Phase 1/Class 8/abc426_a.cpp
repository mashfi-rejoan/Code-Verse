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

  map<string, int> mp;
  mp["Ocelot"] = 1;
  mp["Serval"] = 2;
  mp["Lynx"] = 3;

  string x, y; cin >> x >> y;
  if (mp[x] >= mp[y]) cout << "Yes\n";
  else cout << "No\n";


  return 0;
}