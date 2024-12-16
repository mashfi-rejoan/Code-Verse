#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    cout<<(2<<1)<<nl;   //left shift means multiplying by 2
    cout<<(2>>1)<<nl;   //right shift means deviding by 2

    ll k = 40;
    ll p = 1LL<<k;
    cout<<p<<nl; //to find the power of two
    return 0;
}