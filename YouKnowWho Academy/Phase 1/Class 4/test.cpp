#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 4;
    int a[n] = {1, 2, 3, 3};
    int ans  = 0;
    for(int mask = 1; mask < (1 << n); mask++)
    {
        int cur = -1;
        for(int i = 0; i < n; i++)
        {
            if(mask >> i & 1)
            {
                cur = cur == -1 ? a[i] : cur & a[i];
            }
        }
        ans = max(ans, cur);
    }

    cout << ans << nl; 

    return 0;
}