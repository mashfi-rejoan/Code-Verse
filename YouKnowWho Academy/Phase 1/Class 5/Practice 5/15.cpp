#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

const int MAX = 1e7 + 9;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int k1; cin >> k1;
    queue<int> p;
    while(k1--)
    {
    	int x; cin >> x;
    	p.push(x);
    }

    int k2; cin >> k2;
    queue<int> q;
    while(k2--)
    {
    	int x; cin >> x;
    	q.push(x);
    } 

    int cnt = 0;
    // vector<queue<int>> v;
    while(cnt < MAX)
    {
    	// v.push_back(p);
    	// v.push_back(q);
    	cnt++;
    	if(p.front() > q.front())
    	{
    		p.push(q.front());
    		p.push(p.front());
    		p.pop();
    		q.pop();
    	}
    	else if(q.front() > p.front())
    	{
    		q.push(p.front());
    		q.push(q.front());
    		p.pop();
    		q.pop();
    	}

    	if(p.empty()) 
    	{
    		cout << cnt << ' ' << 2 << nl;
    		return 0;
    	}
    	else if(q.empty()) 
    	{
    		cout << cnt << ' ' << 1 << nl;
    		return 0;
    	}

    	// if(find(all(v), p) != v.end()) 
    	// {
    	// 	cout << -1 << nl;
    	// 	return 0;
    	// }

    }

	cout << -1 << nl;
    return 0;
}