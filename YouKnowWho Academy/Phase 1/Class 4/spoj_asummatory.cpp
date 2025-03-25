#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const ll m = 1000000003;
const int N = 1e6 + 9;
vector<int>prefix(N);

int f(int n)
{
    ll ans = 0;
    ans = 1LL * ((1LL * ans % m) + ((((((1LL * n * (n + 1)) / 2) % m) * 1LL * (((1LL * n * (n + 1)) / 2) % m)) % m) % m)) % m;

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= N; i++)
    {
    	prefix[i] = (prefix[i - 1] + f(i)) % m;
    }

    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
        cout << prefix[n] << nl;
    }

    return 0;
}