#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e7 + 9;
int a[N];
int main()
{
    for(int i = 1; i < N; i++)
    {
        for(int j = i; j < N; j+=i)
        {
            a[j]++;
        }
    }

    int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += (1LL * i * a[i]);
    }

    cout << sum << nl;
    return 0;
}