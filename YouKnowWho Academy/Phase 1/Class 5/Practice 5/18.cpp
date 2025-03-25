/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat  
   E-mail : rejoansaikat01@gmail.com  
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

    string s;
    set<string> st;
    while(cin >> s)
    {
    	string word = "";
    	for(int i = 0; i < s.size(); i++)
    	{
    		if(isalpha(s[i]))
    		{
    			word += tolower(s[i]);
    		}
    		else
    		{
    			if(!word.empty())
    			{
    				st.insert(word);
    				word = "";
    			}
    		}
    	}
    	if(!word.empty()) 
    	{
    		st.insert(word);
    	}
		
    }
    
    for(auto s : st)
    {
    	cout << s << nl;
    }

    return 0;
}