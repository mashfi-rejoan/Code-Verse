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



int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x = 10; 
  float y = 15.7;
  auto ans = x * y;
  cout << typeid(ans).name() << nl;

  return 0;
}