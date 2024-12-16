#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class A
{
private:
    int x;
public:
    get_x()
    {
        cin>>x;
    }
    show_x()
    {
        cout<<x<<nl;
    }

    get_xx()
    {
        return x;
    }
};

class B:public A
{
    int y;
public: 
    get_y()
    {
        cin>>y;
    }
    show_y()
    {
        cout<<y<<nl;
    }

    void addition()
    {
        cout<<"Addition = "<<(get_xx()+y)<<nl;
    }
};

int main()
{
    B obj;
    obj.get_x();
    obj.get_y();
    obj.addition();
    return 0;
}