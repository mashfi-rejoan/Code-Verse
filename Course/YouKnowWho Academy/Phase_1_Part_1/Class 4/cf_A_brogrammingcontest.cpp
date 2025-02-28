#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    bool flag;
    int sz = s.size();
    for(int i = 0; i < sz - 1; i++)
    {

    	if(s[i] != s[i + 1]) cnt++;
    }
    
    if(s[0] == '1' and cnt == 0) cnt = 1;
    else if(s[0] == '1') cnt++;

    cout << cnt << nl;
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