#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()





int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    map<string, string> owner;
    while(t--)
    {
    	string old_username, new_username; cin >> old_username >> new_username;
    	if(owner.find(old_username) == owner.end())
    	{
    		owner[new_username] = old_username;
    	}
    	else 
    	{
    		owner[new_username] = owner[old_username];
    		owner.erase(old_username);
    	}
    }

    cout << owner.size() << nl;
    for(auto [x, y] : owner)
    {
    	cout << y << ' ' << x << nl;
    }

    return 0;
}