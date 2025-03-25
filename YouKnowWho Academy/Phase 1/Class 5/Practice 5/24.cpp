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



void solve() {
    int n; 
    cin >> n;
    vector<int> v, mv;
    map<int, bool> mp;
    for (int i = 0; i < n; i++) 
    {
        int x; 
        cin >> x;
        v.push_back(x);
        mp[x] = false;
    }
    mv = v;
    sort(mv.rbegin(), mv.rend());

    vector<int> temp;
    
    
    int l = 0;
    for(int i = n - 1; i >= 0; i--) 
    {
        
        if (v[i] != mv[l]) 
        {
	        temp.push_back(v[i]);
	        mp[v[i]] = true;
        } 
        else 
        {
            temp.push_back(v[i]);
            for(int j = (int)temp.size() - 1; j >=0; j--) cout << temp[j] << ' ';
            mp[v[i]] = true;
            while(mp[mv[l]] == true) l++;
            temp.clear();
        }

    }
    
	for(int j = (int)temp.size() - 1; j >=0; j--) cout << temp[j] << ' ';
    cout << nl;
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