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

    // pre increament
    void operator++()
    {
        x = x + 1;
    }
    // pre deccreament
    void operator--()
    {
        x = x - 1;
    }
    // post increament
    void operator++(int)
    {
        x = x + 1;
    }
    // post increament
    void operator--(int)
    {
        x = x - 1;
    }
};

int main()
{
    Demo a;
    a.get_data();
    ++a;
    a.show_data();

    a--;
    a.show_data();
}