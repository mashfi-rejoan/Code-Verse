#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n % 10;
    n /= 10;
    int y = n % 10;

    if (x % y == 0)
        cout << "YES" << nl;
    else if (y % x == 0)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}