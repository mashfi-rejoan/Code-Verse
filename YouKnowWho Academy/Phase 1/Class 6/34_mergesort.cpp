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

vector<int> merge(vector<int> l, vector<int> r)
{
    int i = 0, j = 0;
    vector<int> ans;
    while(i < l.size() and j < r.size())
    {
        if(l[i] < r[j]) {
            ans.push_back(l[i]);
            i++;
        } else {
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

vector<int> v;
vector<int> merge_sort(int l, int r)
{
    if(l == r) {
        return vector<int> {v[l]};
    }
    int mid = (l + r) / 2;
    auto L = merge_sort(l, mid);
    auto R = merge_sort(mid + 1, r);
    return merge(L, R);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    while(cin >> x)
    {
    	v.push_back(x);
    }
    int n = v.size();
    auto ans = merge_sort(0, n - 1);
    print(ans);

    // vector<int> l({1, 3, 5, 7}), r({2, 4, 6, 8});
    // auto ans = merge(l, r);
    // print(ans);

    return 0;
}