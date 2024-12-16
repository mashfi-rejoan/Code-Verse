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

    bool operator==(Demo b)
    {
        if (x == b.x)
            return true;
        else
            return false;
    }
    bool operator>(Demo b)
    {
        if (x == b.x)
            return true;
        else
            return false;
    }
    bool operator<(Demo b)
    {
        if (x == b.x)
            return true;
        else
            return false;
    }
};

int main()
{
    Demo a, b;
    a.get_data();
    b.get_data();
    if (a == b)
        cout << "Same\n";
    else
        cout << "Not same\n";
    return 0;
}