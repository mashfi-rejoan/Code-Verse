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

const int mod = 1e9 + 7;

int power(int x, int y) {
  int result = 1;
  while (y > 0) {
    if (y & 1) {         
      result = (result % mod * x % mod) % mod;
    }
    x *= x;              
    y >>= 1;             
  }
  return result;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n), cnt1(30, 0);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      for (int k = 0; k < 30; k++) {
        if (v[i] >> k & 1) cnt1[k]++;
      }
    }
    int sum = 0; 
    for (int k = 0; k < 30; k++) {
      int contrib = power(2, cnt1[k]) - 1;
      sum += (1LL << k) % mod * contrib;
      sum %= mod;
    }
    cout << sum << nl;

    return 0;
}