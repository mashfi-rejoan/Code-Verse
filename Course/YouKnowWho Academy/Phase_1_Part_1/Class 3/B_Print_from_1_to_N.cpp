#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void print_recursion(int n)
{
    if (n == 0)
        return;
    print_recursion(n - 1);
    cout << n << nl;
}

int main()
{
    int n;
    cin >> n;
    print_recursion(n);
    return 0;
}