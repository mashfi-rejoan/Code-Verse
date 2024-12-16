#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

unsigned int flip(unsigned int n)
{
    // for(int k=0; k<32; k++)
    // {
    //     n=n^(1<<k);
    // }
    return ~n;
}

int main()
{
    int q; cin>>q;
    while(q--)
    {
        unsigned int n; cin>>n;
        cout<<flip(n)<<nl;
    }
    return 0;
}