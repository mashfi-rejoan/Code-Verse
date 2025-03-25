#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //prefix sum
    int b[n];
    b[0] = a[0];
    ll sum = 0;
    for(int i = 1; i < n; i++)
    {
        b[i] = b[i-1] + a[i];
        // sum += b[i];
    }

    // for(int i = 0; i < n; i++)
    // {
    //     cout<< b[i] << " ";
    // }

    int q; cin >> q;
    while(q--)
    {
        int l, r; cin >> l >> r;
        if(l==0) cout<< b[r] << nl;
        else
        {
            ll ans = b[r] - b[l-1];
            cout << ans << nl;
        }
    }
    return 0;
}