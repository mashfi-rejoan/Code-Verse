#include <iostream>        
#include <sstream>         
#include <string>          
#include <algorithm>       
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second

void solve()
{
    string s;
    getline(cin, s); 
    stringstream ss(s);
    string word;
    
    while(ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << ' ';
    } 
    cout << nl;
}

int main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    cin.ignore(); 

    while(t--)
    {
        solve();
    }

    return 0;
}
