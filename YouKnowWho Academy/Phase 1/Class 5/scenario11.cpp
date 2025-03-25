#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

const int N = 1e3 + 5;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    } 

    bitset<N> bs[n];

    for(int i = 0; i < n; i++)
    {
    	bs[i] = bitset<N> (v[i]);
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    	for(int j = i + 1; j < n; j++)
    	{
    		if((bs[i] ^ bs[j]).count() <= k) ans++;
    	}
    }

    cout << ans << nl;
    return 0;
}