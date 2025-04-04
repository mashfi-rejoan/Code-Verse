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
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    } 

    for(int i = 0; i < n; i++)
    {
      int min_index = i;
    	for(int j = i + 1; j < n; j++)
    	{
    		if(v[j] < v[min_index])
         {
            min_index = j;
         }
    	}
      swap(v[i], v[min_index]);
    }

    for(auto u : v)
    {
    	cout << u << ' ';
    }
    cout << nl;

    return 0;
}