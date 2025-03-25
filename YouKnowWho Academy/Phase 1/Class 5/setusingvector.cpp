#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

struct Set
{
	vector<int> v;

	void insert(int x)
	{
		int cnt = count(v.begin(), v.end(), x);
		if(cnt == 0) 
		{
			v.push_back(x);
			sort(v.begin(), v.end());
		}

	}

	void erase(int x)
	{
		if(!v.empty())
		{
			auto it = find(v.begin(), v.end(), x);
			v.erase(it);
		}
		else cout << "The set is empty\n";
	}

	int find_index(int x)
	{
		auto it = find(v.begin(), v.end(), x);
		if(it == v.end()) return -1;
		int index = distance(v.begin(), it);
		return index;
	}

	int size()
	{
		return v.size();
	}

	bool empty()
	{
		return v.empty();
	}
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Set se;

    // se.insert(30);
    // se.insert(50);
    // se.insert(10);
    // se.insert(20);

    // se.erase(20);
    
    // se.insert(50);
    // se.insert(20);
    // cout << se.size() << nl;
    // cout << se.empty() << nl;
    // cout << se.find_index(100) << nl;

    Set s;
  s.insert(10);
  s.insert(30);
  s.insert(20);
  cout << s.find_index(10) << '\n'; // Output: 0
  cout << s.find_index(30) << '\n'; // Output: 2
  cout << s.find_index(20) << '\n'; // Output: 1
  cout << s.find_index(40) << '\n'; // Output: -1
  s.erase(10);
  cout << s.find_index(10) << '\n'; // Output: -1
  cout << s.find_index(30) << '\n'; // Output: 1
  cout << s.find_index(20) << '\n'; // Output: 0
  cout << s.find_index(40) << '\n'; // Output: -1
  s.erase(30);
  cout << s.find_index(10) << '\n'; // Output: -1
  cout << s.find_index(30) << '\n'; // Output: -1
  cout << s.find_index(20) << '\n'; // Output: 0
  cout << s.find_index(40) << '\n'; // Output: -1
  s.erase(20);
  cout << s.find_index(10) << '\n'; // Output: -1
  cout << s.find_index(30) << '\n'; // Output: -1
  cout << s.find_index(20) << '\n'; // Output: -1
  cout << s.find_index(40) << '\n'; // Output: -1

    return 0;
}