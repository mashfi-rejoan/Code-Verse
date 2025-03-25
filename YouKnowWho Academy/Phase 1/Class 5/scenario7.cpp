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

    int n; cin >> n;
    multiset<int> mst;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	mst.insert(x);
    } 

int m; cin >> m;
    for(int i = 0; i < m; i++)
    {
    	int x; cin >> x;
    	auto it = mst.find(x);
    	if(it != mst.end())
    	{
    		mst.erase(it);
    	}
    } 

    if(!mst.empty()) cout << mst.size() << nl;
    return 0;
}