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



void solve()
{
   string order, a, b; cin >> order >> a >> b;
   map<char, int> mp;
   for(int i = 0; i < (int)order.size(); i++)
   {
      mp[order[i]] = i;
   }
   for(int i = 0; i < (int)a.size(); i++)
   {
      if(mp[a[i]] < mp[b[i]])
      {
         cout << "<" << nl;
         return;
      }
      else if(mp[a[i]] > mp[b[i]])
      {
         cout << ">" << nl;
         return;
      }
   }
   cout << "=" << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}