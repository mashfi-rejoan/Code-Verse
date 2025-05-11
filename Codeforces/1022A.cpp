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

const int N = 505;
std::vector<int> v(N);

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int curr = 2;
    int j = 0;
    for(int i = 1; i < N; i++)
    {
        if(i <= 3) v[i] = i;
        else
        {
            int pick = v[i - 1] + curr;
            v[i] = pick;
            j++;
            if(j >= 2) 
            {
                j = 0;
                curr++;
            }
        }
    }
    // for(int i = 1; i <= 20; i++) cout << v[i] << ' ';
    // cout << nl; 

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << v[n] << nl;
    }

    return 0;
}