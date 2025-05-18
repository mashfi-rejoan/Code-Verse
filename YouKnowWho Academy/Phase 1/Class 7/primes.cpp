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

const int N = 1e7 + 9;
int d[N];

int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n = 1e5;
   for(int i = 1; i < n; i++) {
      for(int j = i; j < n; j += i) {
         d[j]++;
      }
   }
   vector<int> primes;
   for(int i = 1; i < n; i++) {
      if(d[i] == 2) {
         primes.push_back(i);
      }
   }

   print(primes); cout << nl;

   return 0;
}