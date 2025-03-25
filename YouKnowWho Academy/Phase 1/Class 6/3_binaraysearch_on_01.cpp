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

vector<int>v;

int search_first_occurence_of_1(int l, int r)
{
	int idx = -1;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(1 == v[mid]) 
		{
			idx = mid;
			r = mid - 1;
			// cout << "1 = " << idx << nl;
			// break;
		}
		else l = mid + 1;
		// else if(1 < v[mid]) r = mid - 1;
	}
	// cout << "2 = " << idx << nl;
	// if(idx == 0) return -1;
	// // cout << "3 = " << idx << nl;
	// while(idx--)
	// {
	// 	if(v[idx] == 0) break;
	// }
	// // cout << idx << nl;
	// // cout << "4 = " << idx << nl;
	// if(v[idx] + 1 == 1) return idx + 1;
	// else return -1;
	return idx;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
     v.resize(n);
     for(int i = 1; i <= n; i++)
     {
       cin >> v[i];
     }
     
    int x = search_first_occurence_of_1(1, n);
    cout << x << nl;

    return 0;
}