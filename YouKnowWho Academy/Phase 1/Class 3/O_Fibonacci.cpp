#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int fibo(int n)
{
    if(n==1) return 0;
    else if(n==2) return 1;
    else 
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    int n; cin>>n;
    cout<<fibo(n)<<nl;
    return 0;
}