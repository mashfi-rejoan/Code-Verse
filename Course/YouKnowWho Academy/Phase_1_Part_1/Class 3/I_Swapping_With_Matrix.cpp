#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    --x;
    --y;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // swapping rows
    for (int j = 0; j < n; j++)
    {
        int tmp;
        tmp = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = tmp;
    }

    // swapping rows
    for (int i = 0; i < n; i++)
    {
        int tmp;
        tmp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = tmp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }
    return 0;
}