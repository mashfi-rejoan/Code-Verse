#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e5 + 9;
int main()
{
    int n; cin >> n;
    int a[N];
    ll total_sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_sum += a[i];
    }

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = a[i] * total_sum;
        ans += sum;
    }

    cout << ans << nl;
    return 0;
}