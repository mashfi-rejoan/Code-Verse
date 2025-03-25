#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// p1
    // bitset<8> bs(11);

    // cout << bs << nl; 
    // cout << bs[0] << nl; 

    // bs.flip(0);
    // cout << bs << nl;

    // bs.set(0);
    // cout << bs << nl;
    
    // bs.reset(0);
    // cout << bs << nl;

    // cout << bs.count() << nl;

// p2
    // bitset<10> bs("10110001110");
    // cout << bs << nl;
    // cout << bs.to_ullong() << nl;
    // cout << bs.to_string() << nl;

    // // bs.set();
    // cout << bs.any() << nl;
    // cout << bs.none() << nl;
    // cout << bs.all() << nl;

    bitset<10> bs("10110001110"), p(79);
    cout << "BS  : " << bs << nl;
    cout << "P   : " << p << nl;
    cout << "OR  : " << (bs | p) << nl;
    cout << "AND : " << (bs & p) << nl;
    cout << "XOR : " << (bs ^ p) << nl;

    auto ans =  bs << 1;
    cout << ans << nl;

    auto res =  ~bs;
    cout << res << nl;
    return 0;
}