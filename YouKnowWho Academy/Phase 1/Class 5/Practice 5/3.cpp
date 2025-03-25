#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

set<int> se;

void solve()
{
    int y, x; cin >> y >> x;
    if(y == 1) se.insert(x);
    else if(y == 2) se.erase(x);
    else if(y == 3)
    {
    	if(se.find(x) != se.end())
    	{
    		cout << "Yes\n";
    	}
    	else 
    	{
    		cout << "No\n";
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