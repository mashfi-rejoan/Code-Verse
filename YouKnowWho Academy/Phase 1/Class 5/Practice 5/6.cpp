#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

map<pair<int, int>, string> mp;

void ans()
{
	int x, y; cin >> x >> y;
	pair<int, int> p = make_pair(x, y);
	if(mp.find(p) != mp.end()) cout << mp[p] << nl; 
}

void input()
{
    int x, y; cin >> x >> y;
    string s; cin >> s;
    mp[make_pair(x, y)] = s;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        input();
    }

    cin >> t;
    while(t--)
    {
    	ans();
    }
    return 0;
}