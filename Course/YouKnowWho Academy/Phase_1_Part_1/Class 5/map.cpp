#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void print(map<int, string> mp)
{
	for(auto it = mp.begin(); it != mp.end(); it++)
	{
		cout << (*it).first << ' ' << (*it).second << nl;
	}

	cout << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, string> mp;
    mp[1] = "Mashfi";
    mp[2] = "Rejoan";
    mp[3] = "Saikat";
    mp[4] = "Bob";
    mp[5] = "Miles";
    mp.erase(3);
    print(mp);

    cout << mp.size() << nl;
    auto it = mp.find(2);
    cout << (*it).first << ' ' << (*it).second << nl;

    auto lb = mp.lower_bound(2);
    auto ub = mp.upper_bound(4);

    cout << (*lb).first << ' ' << (*lb).second << nl;
    cout << (*ub).first << ' ' << (*ub).second << nl;

    return 0;
}