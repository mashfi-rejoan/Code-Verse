#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

#define nl '\n'

double is_ok(double x) {
    return (8 * (x * x * x * x)) + (7 * (x * x * x)) + (2 * (x * x)) + (3 * x) + 6;
}

void solve() 
{
    double y; cin >> y;
    if(y < is_ok(0) || y > is_ok(100)) {
        cout << "No solution!" << nl;
        return;
    }
    int iteration = 100;
    double l = 0, r = 100;
    while(iteration--) {
        double mid = (l + r) / 2;
        if(is_ok(mid) >= y) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << fixed << setprecision(4) << l << nl;
}

int main() 
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