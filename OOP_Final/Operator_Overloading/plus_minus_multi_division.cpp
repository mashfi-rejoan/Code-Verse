#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Complex
{
    double real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << nl;
    }

    Complex operator+(Complex b)
    {
        Complex c;
        c.real = real + b.real;
        c.imag = imag + b.imag;

        return c;
    }
};

int main()
{
    double r1, i1, r2, i2;
    cin >> r1 >> i1 >> r2 >> i2;
    Complex a(r1, i1);
    Complex b(r2, i2);

    a.display();
    b.display();

    Complex c;
    c = a + b;
    c.display();
}

// #include <bits/stdc++.h>
// #define ll long long
// #define nl '\n'
// using namespace std;

// class Demo
// {
//     int x;

// public:
//     void get_data()
//     {
//         cout << "Enter a number: ";
//         cin >> x;
//     }

//     void display_data()
//     {
//         cout << x << nl;
//     }

//     Demo operator+(Demo b)
//     {
//         Demo c;
//         c.x = x + b.x;
//         return c;
//     }

//     Demo operator- (Demo b)
//     {
//         Demo c;
//         c.x = (x - b.x);
//     }
// };

// int main()
// {
//     Demo a, b, c;
//     a.get_data();
//     b.get_data();
//     c = a + b;
//     c.display_data();
// }