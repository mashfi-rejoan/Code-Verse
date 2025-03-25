#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

struct Stack
{
	vector<int> v;
	void push(int x)
	{
		v.push_back(x);
	}

	void pop()
	{
		if(v.empty())
		{
			cout << "The stack is empty. Can't pop\n";
			return;
		}
		v.pop_back();
	}

	int top()
	{
		if(v.empty())
		{
			cout << "The stack is empty.\n";
			return 0;
		}
		return v.back();
	}

	int size()
	{
		return v.size();
	}

	bool empty()
	{
		if(v.empty()) return true;
		return false;
		
	}
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top() << nl;

    s.pop();
    cout << s.top() << nl;

    cout << s.size() << nl;

    cout << s.empty() << nl;

    s.pop();
    s.pop();
    s.pop();


    return 0;
}