#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int>v(n);
    int x = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    	sum += v[i];
    }
    cout << abs(sum) << nl;
}

int main()
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