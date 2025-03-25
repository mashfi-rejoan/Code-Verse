#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

pair<int, int> operator + (const pair<int, int> &p1, const pair<int, int> &p2) 
{
	return make_pair(p1.F + p2.F, p1.S + p2.S);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> p1(1, 3); 
    pair<int, int> p2(4, 2); 
    pair<int, int> p3 = p1 + p2; 

    cout << p3.F << ' ' << p3.S << nl;

    return 0;
}