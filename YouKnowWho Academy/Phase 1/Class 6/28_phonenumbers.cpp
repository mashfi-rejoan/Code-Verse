/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    string s; cin >> s;

    string x = s;
    sort(all(x));
    char minch = x[0];

    if(k > n)
    {
        cout << s;
        k -= n;
        while(k--)
        {
            cout << minch;
        }
    }
    else
    {
        string p = s;
        int idx;
        char ch;
        for(int i = 0; i < k; i++)
        {
            
            auto it = upper_bound(all(x), s[i]);
            if(it != x.end())
            {
                idx = i;
                ch = *it;
            }
        }
        p[idx] = ch;
        int sz = idx + 1;
        p.resize(sz);
        if(sz <= k)
        {
            string add(k - sz, minch);
            p += add;
        }
        cout << p << nl;
    }
    
    return 0;
}