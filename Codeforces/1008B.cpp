// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define nl '\n'
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()



// void solve()
// {
//     int n, k; cin >> n >> k;
//     int l = k;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//     {
//     	v[i] = i + 1;
//     }
//     vector<int> u;
//     u = v;
//     ll p = INT_MAX;
//     ll q = 0;
//     do
//     {
//     	for(int i = 0; i < n; i++)
//     	{
//     		q += (n - v[i]);
//     	}
//     	// cout << q << nl << string(20, '-') << nl;
//     	p = min(p, q);
//     	next_permutation(all(v));
//     } while(k--);

//     ll r = 0;
//     do
//     {
//     	for(int i = 0; i < n; i++)
//     	{
//     		r += (n - v[i]);
//     	}
//     	if(r == q) break;
//     	next_permutation(all(u));
//     } while(l--);

//     for(auto x : u)
//     {
//     	cout << x << ' ';
//     }

//     cout << nl;
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t; cin >> t;
//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> teleporters(n + 1);
    if (k % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            if (i == n) {
                teleporters[i] = n - 1;  
            } else if (i == n - 1) {
                teleporters[i] = n;      
            } else if (i % 2 == 1) {
                teleporters[i] = i + 1;  
            } else {
                teleporters[i] = i - 1;  
            }
        }
    } else{ 
        for (int i = 1; i <= n; i++) {
            if (i == n) {
                teleporters[i] = 1; 
            } else {
                teleporters[i] = n; 
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << teleporters[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}