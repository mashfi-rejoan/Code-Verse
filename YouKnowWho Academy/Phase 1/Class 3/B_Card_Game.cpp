#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int a1, a2, b1, b2, cnt = 0;
    cin >> a1 >> a2 >> b1 >> b2;
    if (a1 > b1 && a1 > b2 && a2 > b1 && a2 > b2)
    {
        cout<<4<<nl;
        return;
    }
    if (a1 > b1)
        cnt++;
    else if (a1 > b2)
        cnt++;

    if (a2 > b1)
        cnt++;
    else if (a2 > b2)
        cnt++;

        cout<<cnt<<nl;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}