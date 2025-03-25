#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int>v(n);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    	sum += v[i];
    }
    double ans = (double)sum / n;
    cout << fixed << setprecision(12) << ans << nl;

    return 0;
}