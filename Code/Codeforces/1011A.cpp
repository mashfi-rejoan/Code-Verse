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

bool is_universal(string s)
{
	string sr = s;
    reverse(all(sr));
   	return s < sr;
}

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

bool has_only_one_char(string &s) {
    return set<char>(s.begin(), s.end()).size() == 1;
}

void solve()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    
    if(is_universal(s)) 
    {
    	cout << "YES\n";
    	return;
    }

    if(is_palindrome(s) and k == 0)
    {
    	cout << "NO\n";
    	return;
    }

    if(is_palindrome(s) and k > 0 and has_only_one_char(s)) {
    	cout << "NO\n";
    	return;
    } else if(is_palindrome(s) and k > 0 and !has_only_one_char(s)) {
    	cout << "YES\n";
    	return;
    }

    while(k--)
    {
    	for(int i = 0; i < (n / 2); i++)
    	{
    		if(s[i] > s[n - 1 - i])
    		{
    			swap(s[i], s[n - 1 - i]);
    		}
    	}
    }

    if(is_universal(s)) cout << "YES\n";
   	else cout << "NO\n";

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}