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

string t, p; 
int n;
vector<int> v;

bool is_subsequence(string s)
{
   int j = 0;
   for(int i = 0; i < (int)s.size(); i++)
   {
      if(s[i] == p[j])
      {
         j++;
         if(j >= (int)p.size()) return true;
      }
   }

   return false;
}

bool f(int x)
{
    vector<bool> alive(n, true);
    for(int i = 0; i < x; i++)
    {
        alive[v[i]] = false;
    }
    string s = "";
    for(int i = 0; i < n; i++)
    {
       if(alive[i])
       {
        // cout << v[i] << ' ';
        s += t[i];
       }
    }
    // cout << nl << string(20, '_') << nl;
    return is_subsequence(s);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t >> p;
    n = t.size();
    v.resize(n);

    for(auto &u : v) 
    {
      cin >> u; 
      u--;
    }

    int l = 0, r = n - 1, ans = 0;
    while(l <= r)
    {
      int mid = (l + r) / 2;
      if(f(mid))
      {
         // cout << mid << nl;
         ans = mid;
         l = mid + 1;
      } 
      else
      {
         r = mid - 1;
      }
    }

    cout << ans << nl;
    return 0;
}