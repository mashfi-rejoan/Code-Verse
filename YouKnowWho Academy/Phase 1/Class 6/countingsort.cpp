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
    vector<int> v(n), cnt(1e5);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
      cnt[v[i]]++;
    } 

    // for(auto u : cnt)
    // {
    //   if(u != 0) cout << u << ' ';
    // }

    for(int i = 0; i < cnt.size(); i++)
    {
      while(cnt[i]--)
      {
         cout << i << ' ';
      }
    }
    cout << nl;

    

    return 0;
}