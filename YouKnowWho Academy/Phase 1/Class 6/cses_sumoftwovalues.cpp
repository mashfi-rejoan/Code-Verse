/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
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
    vector<int> v(n);
    unordered_map<int, int, custom_hash> mp; 
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    	
    } 
    
    for(int i = 0; i < n; i++)
    {
    	int target = x - v[i];
    	if(mp.find(target) != mp.end())
    	{
    		cout << mp[target] + 1 << ' ' << i + 1 << nl;
    		return 0;
    	}
    	mp[v[i]] = i;
    }
    cout << "-1\n";
    return 0;
}