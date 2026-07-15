#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Demo
{
    int x;

public:
    void get_data()
    {
        cin >> x;
    }
    void show_data()
    {
        cout << x << nl;
    }
    void operator+=(Demo b)
    {
        x += b.x;
    }
    //-=
    void operator-=(Demo b)
    {
        x -= b.x;
    }
    //*=
    void operator*=(Demo b)
    {
        x *= b.x;
    }
    ///=
    void operator/=(Demo b)
    {
        x /= b.x;
    }
};

int main()
{
    Demo a, b;
    a.get_data();
    b.get_data();
    a += b;
    a.show_data();
    return 0;
}