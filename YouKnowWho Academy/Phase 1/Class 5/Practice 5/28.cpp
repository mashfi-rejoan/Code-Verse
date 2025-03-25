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

using namespace std;



void solve()
{
    int n; cin >> n;
    deque<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    int l, k;
    if(n % 2 == 0) 
    {
    	l = n / 2;
    	k = n - l;
    }
    else
    {
    	l = (n / 2) + 1;
    	k = n - l;
    }
    ll masha = 0, bear = 0;
    while(!v.empty())
    {
    	if(!v.empty()) masha += v.front();
    	if(!v.empty()) v.pop_front();
    	if(!v.empty()) masha += v.front();
    	if(!v.empty()) v.pop_front();

    	if(!v.empty()) bear += v.back();
    	if(!v.empty()) v.pop_back();
    	if(!v.empty()) bear += v.back();
    	if(!v.empty()) v.pop_back();
    }
    // cout << masha << ' ' << bear << nl;
    if(masha > bear) cout << "Masha\n";
    else if(bear > masha) cout << "The Bear\n";
    else cout << "Draw\n";
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