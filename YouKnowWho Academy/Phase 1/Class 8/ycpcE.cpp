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

struct DS
{
  multiset<int> ms;
  multiset<int>::iterator it;
  void add(int x) {
    if (ms.empty()) {
      ms.insert(x);
      it = ms.begin();
      return;
    }
    ms.insert(x);
    if (x < *it) {
      if (ms.size() % 2 == 0) it--;
    } 
    else {
      if (ms.size() % 2 != 0) it++;
    }
  }

  int med() {
    if (ms.empty()) return 0;
    return *it;
  }
};

void solve() 
{
  int n; cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    v.push_back((x % 10));
  }
  DS ds;
  for (int i = 0; i < n; i++) {
    ds.add(v[i]);
    cout << ds.med() << " ";
  }
  cout << nl;

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}