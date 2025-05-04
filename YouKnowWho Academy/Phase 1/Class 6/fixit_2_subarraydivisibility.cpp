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

vector<int> v, prefix;
int n;

// 1. brute force => O(n^3)
int subarrayDivisibility_1() {
	int cnt = 0;
	for(int i = 0; i < n; i++) {
    	for(int j = i; j < n; j++) {
    		int sum = 0;
    		for(int k = i; k <= j; k++) {
    			sum += v[k];
    		}
    		if(sum % n == 0) cnt++;
    	}
    }
    return cnt;
}

int subarrayDivisibility_2() {
	int cnt = 0; 
	for(int i = 0; i < n; i++) {
		int sum = 0;
		for(int j = i; j < n; j++) {
			// cout << (prefix[j] - prefix[i - 1]) << nl;
			if(i == 0) {
				sum = prefix[j];
			} 
			else {
				sum = prefix[j] - prefix[i - 1];
			}
			if(sum % n == 0) cnt++;
		}
	}
	return cnt;
}

void prefixSum() {
	prefix[0] = v[0];
	for(int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + v[i];
	}
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    v.resize(n); prefix.resize(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    } 
    // int ans = subarrayDivisibility_1();

    prefixSum();
    // print(prefix);

    int ans = subarrayDivisibility_2();
    cout << ans << nl;

    return 0;
}