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
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;


vector<int> v;

vector<int> merge(vector<int> l, vector<int> r)
{
	vector<int> ans;
	int i = 0, j = 0;
	while(i < l.size() and j < r.size())
	{
		if(l[i] < r[j])
		{
			ans.push_back(l[i]);
			i++;
		}
		else
		{
			ans.push_back(r[j]);
			j++;
		}
	}

	while(i < l.size())
	{
		ans.push_back(l[i]);
		i++;
	}

	while(j < r.size())
	{
		ans.push_back(r[j]);
		j++;
	}
	return ans;
}

vector<int> merge_sort(int l, int r)
{
	if(l == r) return vector<int> ({v[l]});
	int mid = l + (r - l) / 2;
	auto L = merge_sort(l, mid);
	auto R = merge_sort(mid + 1, r);

	return merge(L, R);

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    auto ans = merge_sort(0, n - 1);
    print(ans);


    return 0;
}