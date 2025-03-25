#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 2e5 + 9;
ll p[N];

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //prefix sum
    p[1] = a[0];
    for(int i = 2; i <= n; i++)
    {
        p[i] = p[i-1] + a[i-1];
    }
    // for(int i = 1; i <= n; i++)
    // {
    //     cout << p[i] << " ";
    // }
    // cout << nl;
    int l = 1, r = 1, cnt = 0;
    while(true)
    {
        if(l == n && r == n) break;
        if((p[r] - p[l-1]) % n == 0) cnt++;
        r++;
        if(r > n)
        {
            l++;
            r = l;
        }
    }

    cout << cnt << nl;
    return 0;
}