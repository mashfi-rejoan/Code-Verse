#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int fact(int n)
{
    ll factorial = 1;
    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

bool is_curious(int i)
{
    int p=i;
    int sum=0;

        while(p>0)
        {
            int d = p%10;
            int m = fact(d);
            sum+=m;
            p/=10;
        }
        return sum % i == 0;
}

int main()
{
    int n; cin>>n;
    ll y =0;
    ll ans=0;
    for(int i=10; i<=n; i++)
    {
        if(is_curious(i))
        {
            ans+=i;
        }
    }

    cout<<ans<<nl;

    return 0;
}