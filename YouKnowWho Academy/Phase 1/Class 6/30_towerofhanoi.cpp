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

int n, step, moves;
void tower(int disk, char start, char mid, char end)
{
	if(disk == 0) return;
	tower(disk - 1, start, end, mid);
	moves++;
	if(moves == step)
	{
		cout << disk << " : " << start << " => " << end << nl;
	}
	tower(disk - 1, mid, start, end);
}

void solve()
{
    cin >> n >> step;
    moves = 0;
    tower(n, 'A', 'B', 'C');
}

int32_t main()
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