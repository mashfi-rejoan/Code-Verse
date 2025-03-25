#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

map<string, int> mp;

void print(map<string, int> mp)
{
	for(auto [x, y] : mp)
	{
		cout << x << ' ' << y << nl;
	}
	cout << string(20, '-') << nl;
}



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;
    while(q--)
    {
    	int ty; cin >> ty;
    	string name; cin >> name;
    	if(ty == 1)
    	{
    		int y; cin >> y;
    		mp[name] += y;
    	}
    	else if(ty == 2)
    	{
    		if(mp.find(name) != mp.end()) {
    			mp.erase(name);
    		}
    	}
    	else
    	{
    		if(mp.find(name) != mp.end())
    		{
    			cout << mp[name] << nl;
    		}
    		else 
    		{
    			cout << 0 << nl;
    		}
    	}
	
    	// print(mp);
    }
	
    return 0;
}