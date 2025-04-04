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

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    } 
    int cnt = 0;
    for(int start = 0; start < n; start++)
    {
    	for(int end = start; end < n; end++)
    	{
    		ll sum = 0;
    		for(int k = start; k <= end; k++)
    		{
    			// cout << v[k] << ' ';
    			sum += v[k];
    		}
    		// cout << nl;
    		if(sum % n == 0) cnt++;
    	}
    }

    cout << cnt << nl;
    return 0;
}