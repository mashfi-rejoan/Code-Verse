/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  
*/


#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '



int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n = 100;
   vector<int> v;
   for(int i = 1; i * i <= n; i++) {
      if(n % i == 0) {
        v.push_back(i);
        if(i != (n / i)) v.push_back(n / i);
      }
   }
   print(v);

   for() {
      
   }

   return 0;
}