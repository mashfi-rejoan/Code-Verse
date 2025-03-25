#include<iostream>
#include<string>
#include<algorithm>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    bool x = next_permutation(s.begin(), s.end());
    if(x) cout << n << ' ' << s << nl;
    else cout << n << ' ' << "BIGGEST" << nl;


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