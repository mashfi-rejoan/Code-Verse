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

using namespace std;



void solve()
{
    int n; cin >> n;
    // cout << "n = " << n << nl;
    if(n == 1 or n == 3) 
    {
    	cout << -1 << nl;
    }
    else if(n % 2 == 0)
    {
    	for(int i = 1; i <= (n - 2); i++)
    	{
    		cout << "3";
    	}
    	cout << "66" << nl;
    }
    else
    {
    	for(int i = 1; i <= (n - 5); i++)
    	{
    		cout << "3";
    	}
    	cout << "36366" << nl;
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