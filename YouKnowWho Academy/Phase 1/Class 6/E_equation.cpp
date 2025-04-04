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

double c;
bool f(double x)
{
	return x * x + sqrt(x) >= c;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> c;
    double l = 0, r = 1e5, ans;
    while(r - l > 1e-7)
    {
    	double mid = l + (r - l) / 2;
    	if(f(mid))
    	{
    		ans = mid;
    		r = mid;
    	}
    	else 
    	{
    		l = mid;
    	}
    }

    cout << fixed << setprecision(12) << ans << nl;
    return 0;
}