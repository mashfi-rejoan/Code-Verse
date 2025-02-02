#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e6 + 9;
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
    while(n--)
    {
        int x; cin >> x;
        cout << a[x] << nl;
    }
    return 0;
}