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

using namespace std;



void solve()
{
    int a, b; cin >> a >> b;
    int xk, yk; cin >> xk >> yk;
    int xq, yq; cin >> xq >> yq;
    set<pair<int, int>> vk, vq;

    vk.insert(make_pair(xk + a, yk + b));
	vk.insert(make_pair(xk + a, yk - b));
	vk.insert(make_pair(xk - a, yk + b));
	vk.insert(make_pair(xk - a, yk - b));
	vk.insert(make_pair(xk + b, yk + a));
	vk.insert(make_pair(xk + b, yk - a));
	vk.insert(make_pair(xk - b, yk + a));
	vk.insert(make_pair(xk - b, yk - a));

	vq.insert(make_pair(xq + a, yq + b));
	vq.insert(make_pair(xq + a, yq - b));
	vq.insert(make_pair(xq - a, yq + b));
	vq.insert(make_pair(xq - a, yq - b));
	vq.insert(make_pair(xq + b, yq + a));
	vq.insert(make_pair(xq + b, yq - a));
	vq.insert(make_pair(xq - b, yq + a));
	vq.insert(make_pair(xq - b, yq - a));

	int ans= 0;
	for(auto position : vk)
	{
		if(vq.find(position) != vq.end()) ans++;
	}
	cout << ans << nl;
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