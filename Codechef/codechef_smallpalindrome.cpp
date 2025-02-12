#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int x, y; cin >> x >> y;
    int p = x / 2;
    int q = p;
    while(p--)
    {
    	cout << x;
    }
    for(int i = 1; i <= y; i++)
    {
        cout << y;
    }
    while(q--)
    {
    	cout << x;
    }

    cout << nl;
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
