#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e6 + 9;
int d[N];
const ll m = 1073741824;

int main()
{
    for(int i = 1; i<N; i++)
    {
        for(int j = i; j<N; j+=i)
        {
            d[j]++;
        }
    }

    int a, b, c; cin >> a >> b >> c;
    ll sum = 0;
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            for(int k = 1; k <= c; k++)
            {
                ll p = 1LL * i * j * k;
                sum = ((sum%m) + (d[p]%m))%m;
            }
        }
    }
    cout<<sum<<nl;
    return 0;
}