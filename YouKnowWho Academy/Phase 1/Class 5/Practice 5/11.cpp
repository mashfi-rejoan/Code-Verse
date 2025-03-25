#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



void solve()
{
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
    	mp[v[i]]++;
    }
    priority_queue<pair<int, int>> pq;
    for(auto [val, cnt] : mp)
    {
    	pq.push(make_pair(cnt, val));
    }
    int alive = n;
    while(pq.size() > 1)
    {
    	auto [cnt_1, val_1] = pq.top();
    	pq.pop();
    	auto [cnt_2, val_2] = pq.top();
    	pq.pop();
    	cnt_1--; cnt_2--;
    	alive -= 2;
    	if(cnt_1 > 0) pq.push(make_pair(cnt_1, val_1));
    	if(cnt_2 > 0) pq.push(make_pair(cnt_2, val_2));
    }
    cout << alive << nl;
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