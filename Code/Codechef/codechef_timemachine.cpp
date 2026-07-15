#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;
    if(abs(2050 - x) <= 25) cout << "YES\n";
    else cout << "NO\n"; 

    return 0;
}