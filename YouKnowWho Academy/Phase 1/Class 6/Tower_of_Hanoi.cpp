// tower of hanoi
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

void TOH(int n, char from, char u, char to)
{
    if(n <= 0) return;
    TOH(n - 1, from, to, u);
    cout << n << ' ' << from << " => " << to << nl;
    TOH(n - 1, u, from, to);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    TOH(n, 'A', 'B', 'C'); 

    return 0;
}