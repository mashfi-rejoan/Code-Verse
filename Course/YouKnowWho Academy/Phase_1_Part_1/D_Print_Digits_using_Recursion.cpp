#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void print_digits(int n)
{
    if (n == 0)
        return;
    else
    {
        print_digits(n / 10);
        cout << (n % 10) << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << 0 << nl;
        }
        else
        {
            print_digits(n);
            cout << nl;
        }
    }

    return 0;
}