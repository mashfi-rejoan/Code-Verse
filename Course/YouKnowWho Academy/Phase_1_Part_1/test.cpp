#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    int n = 3;
    int sum = 0;
    for(int mask = 0; mask<(1<<n); mask++)
    {
        for(int i=0; i<n; i++)
        {
            if(mask & (1<<i))
            {
                sum+=i;
            }
        }
    }
    cout<<sum<<nl;
    return 0;
}