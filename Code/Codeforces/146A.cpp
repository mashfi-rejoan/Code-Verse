/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    set<char> se;
    for(auto ch : s)
    {
    	se.insert(ch);
    } 
    if((int)se.size() % 2 != 0) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";

    return 0;
}