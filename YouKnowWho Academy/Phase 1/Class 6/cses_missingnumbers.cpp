/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v, p;
    int xorrie = 0;
    for(int i = 0; i < (n - 1); i++)
    {
    	int x; cin >> x;
    	v.push_back(x);
    	xorrie ^= x;
    } 
    int xorr = 0;
    for(int i = 1; i <= n; i++)
    {
    	xorr ^= i;
    }
    cout << (xorr ^ xorrie) << nl;
    return 0;
}