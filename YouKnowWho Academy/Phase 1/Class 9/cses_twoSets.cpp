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
  int n; cin >> n;
  // trace(n);
  int sum = n * (n + 1) / 2;
  if (sum % 2 != 0) {
    no;
    return;
  }
  int s1 = 0, s2 = 0;
  n++;
  vector<int> a, b;
  while (n--) {
    // trace(n);
    if (n <= 0) break;
    if (s1 == 0) {
      a.push_back(n);
      s1 = n;
      continue;
    }
    else if (s2 == 0) {
      b.push_back(n);
      s2 = n;
      continue;
    }

    if (s1 < s2) {
      s1 += n;
      a.push_back(n);
    }
    else {
      s2 += n;
      b.push_back(n);
    }
  }
  // trace(s1);
  // trace(s2);
  sort(all(a));
  sort(all(b));
  if (s1 == s2) {
    yes;
    cout << (int)a.size() << nl;
    print(a); cout << nl;
    cout << (int)b.size() << nl;
    print(b); cout << nl;
  }
  else no;


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