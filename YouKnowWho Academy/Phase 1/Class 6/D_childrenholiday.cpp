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

int m, n;
vector<tuple<int, int, int>> v;
vector<int> cs, best_cs;

bool f(int time)
{
   cs.clear();
	int inflatted = 0;
	for(auto [t, z, y] : v)
    {
      int individul_inflation = 0;
    	int one_cycle = (t * z) + y;
      int cycle_possible_within_time = time / one_cycle;
      individul_inflation = cycle_possible_within_time * z;
      int remain = time % one_cycle;
      if(remain >= (t * z)) remain = t * z;
      individul_inflation += (remain / t);
      inflatted += individul_inflation;
      

      if(inflatted >= m) 
      {
         individul_inflation -= (inflatted - m);
         cs.push_back(individul_inflation);
         while(cs.size() < v.size())
         {
            cs.push_back(0);
         }
         return true;
      }
      cs.push_back(individul_inflation);
    }

    return inflatted >= m;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;

    for(int i = 0; i < n; i++)
    {
    	int t, z, y; cin >> t >> z >> y;
    	v.push_back({t, z, y});
    }  

    if(m == 0)
    {
    	cout << 0 << nl;
    	for(int i = 0; i < n; i++)
    	{
    		cout << 0 << ' ';
    	}
    	cout << nl;
    	return 0;
    }

    // sort(all(v));
    int l = 0, r = 9e9, min_time = -1;
    while(l <= r)
    {
    	int mid = l + (r - l) / 2;
    	if(f(mid))
    	{
    		min_time = mid;
    		best_cs = cs;
    		r = mid - 1;

    	}
    	else
    	{
    		l = mid + 1;
    	}
    }

    cout << min_time << nl;
    print(best_cs);
    cout << nl;

    // for(auto [t, z, y] : v)
    // {
    // 	cout << t << ' ' << z << ' ' << y << nl;
    // }

    return 0;
}