#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

bool is_perfect(ll sum)
{
	ll x = sqrt(sum);
    x = x * x;
    if(sum == x) return false;
    else return true;
}

void solve()
{
    int n; cin >> n;
    vector<int> v(n);

    ll sum = (1LL * n * (n + 1)) / 2;
    if(!is_perfect(sum) or n == 1)
    {
        cout << -1 << nl;
        return;
    }

    for(int i = 0; i < n; i++)
    {
        v[i] = i+1;
    }

    ll sumofv = 0;
    for(int i = 0; i < n; i++)
    {
        sumofv += v[i];
        if(!is_perfect(sumofv)) 
        {
            if((i + 1) < n)
            {
                sumofv -= v[i];
                swap(v[i], v[i + 1]);
                sumofv += v[i];
            }
            cout << v[i] << ' ';
        }
        else cout << v[i] << ' ';
    }
    
    cout << nl;
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