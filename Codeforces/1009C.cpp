#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



// void solve()
// {
//     int x; cin >> x;
    
//     for(int i = 0; i < 31; i++)
//     {
//         int y = 0;
//         int bit = x & (1 << i);
//         if(bit != 0)
//         {
//             y = y | (1 << i);
//             for(int j = 0; j < 31; j++)
//             {
//                 bit =  x & (1 << j);
//                 if(bit == 0)
//                 {
//                     y = y | (1 << j);

//                     if(y < x) 
//                     {
//                         cout << y << nl;
//                         return;
//                     }
//                 }
//             }
//         }
//     }
    
//     cout << -1 << nl;
// }

bool is_nondtriangle(int x, int y, int z)
{
    if((z + x) > y and (x + y) > z and (y + z) > x)
        {
            return true;
        }
    return false;
}

void solve()
{
    int x, y, z; cin >> x;
    y = x - 1;
    z = x ^ y;
    if(is_nondtriangle(x, y, z)) 
    {
        cout << y << nl;
        return;
    }

    y = x - 2;
    z = x ^ y;
    if(is_nondtriangle(x, y, z)) 
    {
        cout << y << nl;
        return;
    }

    y = x / 2;
    z = x ^ y;
    if(is_nondtriangle(x, y, z)) 
    {
        cout << y << nl;
        return;
    }

    cout << -1 << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}