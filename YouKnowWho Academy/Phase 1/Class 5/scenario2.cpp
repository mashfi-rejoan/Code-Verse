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
    vector<string> vs;
    for(int i = 0; i < n; i++)
    {
    	string s; cin >> s;
    	vs.pb(s);
    }
    sort(all(vs));
    for(auto s : vs)
    {
    	cout << s << nl;
    }

    return 0;
}