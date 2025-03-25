#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n, s; cin >> n >> s;
    int ans = (s + n - 1) / n;
    cout<< ans << nl;
    return 0;
}