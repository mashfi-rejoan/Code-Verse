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



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n + 1), prefix(n + 1);
    for(int i = 1; i <= n; i++)
    {
    	cin >> v[i];
    } 

    for(int i = 1; i <= n; i++)
    {
    	prefix[i] = prefix[i - 1] + v[i];
    }
    // print(prefix);

    int q; cin >> q;
    while(q--)
    {
    	int item; cin >> item;
    	int it = lower_bound(prefix.begin() + 1, prefix.end(), item) - prefix.begin();
    	cout << it << nl;
    }
    return 0;
}