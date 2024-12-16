#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int fact(int n)
{
    if(n==1) return 1;
    else 
    {
        return fact(n-1) * n;
    }
}

int main()
{
    int n; cin>>n;
    cout<<fact(n)<<nl;
    return 0;
}