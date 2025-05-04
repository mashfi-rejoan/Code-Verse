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

const int MOD = 1e9 + 7;

bool is_prime(int n) 
{
    if (n <= 1) return false;         
    if (n <= 3) return true;          
    if (n % 2 == 0 || n % 3 == 0) return false; 

    for (int i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}


bool check(int x, int k) 
{
    string yr = "";
    for (int i = 0; i < k; i++) 
    {
        yr += to_string(x);
    }
    if (yr.size() <= 18) 
    {
        int y = stoll(yr);
        return is_prime(y);
    }
    int y = 0;
    for (char c : yr) 
    {
        y = ((y * 10) + (c - '0')) % (int)MOD;
    }

    return is_prime(y);
}


void solve()
{
    int n, k; cin >> n >> k;
    if(check(n, k)) cout << "YES\n";
    else cout << "NO\n";   
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