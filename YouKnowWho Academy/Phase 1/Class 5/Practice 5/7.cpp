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

    int n, m; cin >> n >> m;
        unordered_map<string, int> mp;

    for(int i = 0; i < n; i++)
    {
    	string s; cin >> s;
    	int salary; cin >> salary;
    	mp[s] = salary;
    }

    while(m--)
    {
    	string word;
    	ll ans = 0;
    	while(cin >> word)
    	{
    		
    		if(word == ".") break;
    		if(mp.find(word) != mp.end())
    		{
    			ans += mp[word];
            }
    	}
    	cout << ans << nl;
    }
    return 0;
}