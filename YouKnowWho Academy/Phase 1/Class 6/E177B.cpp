/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;


    vector<int> a, b;
    vector<int> prefix;

void solve()
{
    int n, k, x; 
	cin >> n >> k >> x;
    int bsz = n * k;
	a.resize(n); b.resize(bsz); prefix.resize(bsz + 1, 0);
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }

    for(int i = 0; i < bsz; i++)
    {
    	b[i] = a[i % n];
    }

    for(int i = 0; i < bsz; i++)
    {
    	prefix[i + 1] = prefix[i] + b[i];
    }

    int answer = 0;
    for(int i = 0; i < bsz; i++)
    {
    	int l = i, r = bsz - 1;
    	bool flag = false;
    	while(l <= r)
    	{
    		int mid = l + (r - l) / 2;
    		int sum = prefix[mid + 1] - prefix[i];

    		if(sum >= x)
    		{
    			flag = true;
    			r = mid - 1;
    		}
    		else
    		{
    			l = mid + 1;
    		}
    	}
    	if(flag) answer++;
    }

    cout << answer << nl;
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