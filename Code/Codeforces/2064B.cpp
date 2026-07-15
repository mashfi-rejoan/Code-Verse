/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &x : arr) cin >> x;

    vector<int> freq(n + 1);
	for(int i = 0; i < n; i++) freq[arr[i]]++;

	vector<int> subarray(n);
	if(freq[arr[0]] == 1) {
		subarray[0] = 1;
	}
	for(int i = 1; i < n; i++) {
		if(freq[arr[i]] == 1) {
			subarray[i] = subarray[i - 1] + 1;
		}
	}
	int mx = *max_element(all(subarray));
	if(mx == 0) {
		cout << 0 << nl;
		return;
	}
	// print(subarray);
	// cout << nl;

	// cout << mx << nl;
	for(int i = 0; i < n; i++) {
		if(subarray[i] == mx) {
			int l = i - subarray[i] + 2;
			int r = i + 1;
			cout << l << ' ' << r << nl;
			return;
		}
	}
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