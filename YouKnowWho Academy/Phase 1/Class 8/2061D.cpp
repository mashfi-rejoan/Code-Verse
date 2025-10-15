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
  int n, m; cin >> n >> m;
  set<int, greater<int>> msa, msb;
  map<int, int> mpa, mpb;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    msa.insert(x);
    mpa[x]++;
  }
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    msb.insert(x);
    mpb[x]++;
  }
  // print(msa); cout << nl;
  // print(msb); cout << nl;
  // int it = 50;
  while (true) {
    if (msa.empty() and msb.empty()) {
      yes;
      return;
    }
    if (msa.empty() or msb.empty()) {
      no;
      return;
    }
    int mxa = *msa.begin();
    int mxb = *msb.begin();
    if (mxa > mxb) {
      no;
      return;
    }

    if (mpb[mxa]) {
      int mn = min(mpa[mxa], mpb[mxa]);
      mpa[mxa] -= mn;
      mpb[mxa] -= mn;
      if (mpa[mxa] == 0) msa.erase(mxa);
      if (mpb[mxa] == 0) msb.erase(mxa);
    }
    else {
      int f = mxb / 2, c = (mxb + 2 - 1) / 2;
      msb.erase(msb.begin());
      msb.insert(f);
      msb.insert(c);
      mpb[f] += mpb[mxb];
      mpb[c] += mpb[mxb];
      mpb[mxb] = 0;
      if (mpb[mxb] == 0) msb.erase(mxb);
    }
  }

}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--) solve();

  return 0;
}