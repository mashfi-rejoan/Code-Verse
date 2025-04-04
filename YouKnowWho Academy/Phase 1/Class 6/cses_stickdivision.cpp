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
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n; cin >> x >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++)
    {
    	int k; cin >> k;
    	pq.push(k);
    }
    ll ans = 0;
    while(pq.size() >= 2)
    {
    	int x = pq.top();
    	pq.pop();

    	int y = pq.top();
    	pq.pop();

    	ans += (x + y);
    	pq.push(x + y);
    }
    cout << ans << nl;

    return 0;
}