#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin >> n;
    n -=2;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    for(int i = 0; i < n - 2; i++)
    {
        if(v[i] == 1 and v[i + 1] == 0 and v[i + 2] == 1) 
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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


