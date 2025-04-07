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

const int C = 1e13;

int count_unset_bit(int num)
{
	int bit = log2(num) + 1;
    int set_bit = __builtin_popcount(num);
    int unset_bit = bit - set_bit;
    return unset_bit;
}

void solve()
{
   int n, q; cin >> n >> q;
   // cout << "N Q : " << n << ' ' << q << nl;
   vector<int> v;
   for(int i = 0; i < n; i++)
   {
     int x; cin >> x;
     v.push_back(x);
   }
   // cout << "VECTOR : ";
   // print(v);
   // cout << nl;
   while(q--)
   {
      int type; cin >> type;
      // cout << "TYPE : " << type << nl;

      if(type == 1)
      {
         int p, val; cin >> p >> val;
         p--;
         // cout << "P VAL : " << p << ' ' << val << nl;
         v[p] = val;
         // cout << "VAL : " << v[p] << nl; 
      }
      else
      {
         int cnt = 0;
         int l, r, k; cin >> l >> r >> k;
         l--; r--;
         // cout << "L R K : " << l << ' ' << r << ' ' << k << nl;

         for(int i = l; i <= r; i++)
         {
            int num = v[i];
            if(count_unset_bit(num) == k)
            {
            	cnt++;
            }
         }
         cout << cnt << nl;
      }
   }
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