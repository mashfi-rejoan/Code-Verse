/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;

struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x; cin >> n >> x;
    vector<int> v(n + 1), prefix(n + 1);
    for(int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    for(int i = 1; i <= n; i++) {
    	prefix[i] = prefix[i - 1] + v[i];
    }
    unordered_map<int, int, custom_hash> ump;
    int ans = 0;
    ump[0]++;
    for(int i = 1; i <= n; i++) {
    	int item = prefix[i] - x;
    	if(ump.find(item) != ump.end()) {
    		ans += ump[item];
    	}
    	ump[prefix[i]]++;
    } 
    cout << ans << nl;
    return 0;
}