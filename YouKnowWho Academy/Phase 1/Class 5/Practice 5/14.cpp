#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second

void FIFO (int n)
{
	queue<int> q;
	while(n--)
	{
		string i; cin >> i;
		if(i == "IN")
		{
			int x; cin >> x;
			q.push(x);
		}
		else 
		{
			if(q.empty()) cout << "None" << nl;
			else
			{
				cout << q.front() << nl;
				q.pop();
			}
		}
	}
}

void FILO (int n)
{
	stack<int> st;
	while(n--)
	{
		cin.ignore();
		string i; cin >> i;
		if(i == "IN")
		{
			int x; cin >> x;
			st.push(x);
		}
		else 
		{
			if(st.empty()) cout << "None\n";
			else 
			{
				cout << st.top() << nl;
				st.pop();
			}
		}
	}
}


void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    if(s == "FIFO") FIFO(n);
    else FILO(n);
}

int main()
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