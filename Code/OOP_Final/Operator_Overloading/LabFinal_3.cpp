/*
A class named "Calculation" contains two operator overloading functions. 
Implement a code such that the statement result = 100 - calc2 compiles correctly, where 100 is an integer, 
calc2 is an object of the Calculation class, and result is another object of the same class.
*/


#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Calculation
{
    int value;

public:
    void get_data()
    {
        cin >> value;
    }
    void show_data()
    {
        cout << value << nl;
    }

    friend Calculation operator-(int num, Calculation obj)
    {
        Calculation result;
        result.value = num - obj.value;
        return result;
    }
};

int main()
{
    Calculation result, calc2;
    calc2.get_data();
    result = 100 - calc2;
    result.show_data();

    return 0;
}