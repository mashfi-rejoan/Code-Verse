/*
2. Create a class Journey that stores the distance in kilometers.
Owenfisadi the ==, <, > operator to compare one Journey object with another.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class Journey
{
public:
    float distance;
    Journey(float d)
    {
        distance = d;
    }

    bool operator==(Journey obj)
    {
        if (distance == obj.distance)
            return true;
        else
            return false;
    }
    bool operator>(Journey obj)
    {
        if (distance > obj.distance)
            return true;
        else
            return false;
    }
    bool operator<(Journey obj)
    {
        if (distance < obj.distance)
            return true;
        else
            return false;
    }
};

int main()
{
    Journey a(20), b(10);
    if (a == b)
        cout << "Equal\n";
    else if (a > b)
        cout << "A is greater\n";
    else if (a < b)
        cout << "A is smaller\n";
}