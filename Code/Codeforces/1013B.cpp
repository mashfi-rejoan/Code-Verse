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

using namespace std;



void solve()
{
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    sort(allr(v));
    int i = 0;
    int mn = INT_MAX;
    int no_member = 0;
    ll team = 0;
    while(i < n)
    {
    	mn = (mn, v[i]);
    	no_member++;
    	int skill = mn * no_member;
    	if(skill >= x)
    	{
    		team++;
    		mn = INT_MAX;
    		no_member = 0;
    	}
    	i++;
    }
    cout << team << nl;
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