#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;


int main()
{
    string a, b; cin >> a >> b;
    if(stoi(a) == stoi(b)) cout << "=\n";
    else if(stoi(a) < stoi(b)) cout << "<\n";
    else cout << ">\n";
    return 0;
}