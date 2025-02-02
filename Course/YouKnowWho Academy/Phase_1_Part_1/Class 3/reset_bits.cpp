#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int n, k; cin>>n>>k;
    cout<<(n&((1<<30)-(1<<k)))<<nl;
    return 0;
}