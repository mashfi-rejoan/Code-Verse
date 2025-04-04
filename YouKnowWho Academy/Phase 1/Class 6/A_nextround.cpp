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



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    int score = v[k - 1];
    int ans = 0;
    for(auto u : v)
    {
    	if(u != 0 and u >= score) ans++;
    }
    cout << ans << nl;
    return 0;
}