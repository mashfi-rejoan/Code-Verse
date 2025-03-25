#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

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

    unordered_map<int, int, custom_hash> mp;
    vector<int> v;
    int x;
    while(cin >> x)
    {
    	if(find(all(v), x) == v.end())
    	{
    		v.push_back(x);
    	}
    	mp[x]++;
    } 
    // for(auto [x, y] : mp)
    // {
    // 	cout << x << ' ' << y << nl;
    // }

    for(auto u : v)
    {
    	cout << u << ' ' << mp[u] << nl;
    }

    return 0;
}