#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int m = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int>v(n);
    ll total_sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
    }
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        total_sum -= v[i];
        ll sum = ((v[i] % m) * (total_sum % m) % m);
        ans = ((ans % m) + (sum % m) % m);
    }
    cout << ans << nl;

    return 0;
}