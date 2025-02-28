#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // string s = "STUDENTS OF CSE";
    // string t = "TEACHERS OF BUBT";

    // string a = s.substr(7, 4);
    // cout << a << nl;

    // string b = a.insert(1, "TUDENT");
    // cout << b << nl;

    // string c = b.erase(7, 3);
    // cout << c << nl;

    // auto it = find(c.begin(), c.end(), 'T');
    // if(it != s.end())
    // {
    // 	*it = 'O';
    // }
    // cout << c << nl;

    // string s[5];
  	// for (int i = 0; i < 5; i++) {
    // 	cin >> s[i];
  	// }
  	// for (int i = 0; i < 5; i++) {
   	//  	cout << s[i] + "!" << '\n'; // append "!" to each string
  	// }

    int n; cin >> n;
  	vector<string> v(n);
  	for(int i = 0; i < n; i++)
  	{
  		cin >> v[i];
  	}
  	// for(int i = 0; i < n; i++)
  	// {
  	// 	v[i].push_back('!');
  	// 	cout << v[i] << nl;
  	// }

  	pair<int, vector<string>> p = {1, v};
  	cout << p.first <<  ' ' << p.second[0] << nl; 
  	cout << p.first <<  ' ' << p.second[3] << nl; 

    return 0;
}

