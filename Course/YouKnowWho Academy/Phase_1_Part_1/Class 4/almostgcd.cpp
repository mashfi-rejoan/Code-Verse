#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e3 + 9;
vector<ll>v(N, 0);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
    	for (int j = 2; j <= 1000; j++)
    	{
    		if(a[i] % j == 0) v[j]++;
    	}
    }


    int mx = *max_element(v.begin(), v.end());
    for (int j = 2; j <= 1000; j++)
    {
        if(mx == v[j]) 
        {
            cout << j << nl;
            break;
        }
    }

    return 0;
}