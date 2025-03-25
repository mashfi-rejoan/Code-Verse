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

vector<string> path;
void update_path(string file)
{
	if(!file.empty())
	{
		if(file == ".." and !path.empty()) 
		{
			path.pop_back();
		}
		else 
		{
			path.push_back(file);
		}
	}
	
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        string ty; cin >> ty;
        
	    if(ty == "pwd")
	    {
	    	for(auto u : path)
	    	{
	    		cout << '/' << u;
	    	}
	    	cout << '/' << nl;
	    }
	    else
	    {
	    	string s; cin >> s;
	    	if(s[0] == '/') path.clear();
	    	string file;
	    	for(int i = 0; i < s.size(); i++)
	    	{
	    		if(s[i] == '/')
	    		{
	    			update_path(file);
	    			file.clear();
	    		}
	    		else
	    		{
	    			file += s[i];
	    		}
	    	}
	    	update_path(file);
	    }
    }

    return 0;
}