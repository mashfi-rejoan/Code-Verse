#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k; 
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	v.push_back(x);
    	// cin >> v[i];
    }

    priority_queue<int> pq;
    for(int i = 0; i < n; i++)
    {
    	pq.push(v[i]);
    	if(pq.size() > k) 
    	{
    		pq.pop();
    	}
    	if(i >= k - 1)
    	{
    		cout << pq.top() << nl;
    	}
    	else 
    	{
    		cout << -1 << nl;
    	}
    	
    }
    return 0;
}