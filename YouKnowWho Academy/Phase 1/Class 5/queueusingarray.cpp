#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e3 + 9;

struct Queue
{
	int a[N];
	int start = 1, end = 0;

	void push(int x)
	{
		end++;
		a[end] = x;
	}

	void pop()
	{
		if(start > end)
		{
			cout << "Queue is empty. Can't pop\n";
			return;
		}

		start++;
	}

	int front()
	{
		if(start > end)
		{
			cout << "Queue is empty.\n";
			return -1;
		}
		return a[start];
	}

	int back()
	{
		if(start > end)
		{
			cout << "Queue is empty.\n";
			return -1;
		}
		return a[end];
	}

	int size()
	{
		return end - start + 1;
	}

	bool empty()
	{
		return start > end;
	}
};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << nl;
    cout << q.back() << nl;

    q.pop();
    cout << q.front() << nl;
    cout << q.back() << nl;

    q.pop();
    cout << q.front() << nl;
    cout << q.back() << nl;

    q.pop();
    cout << q.front() << nl;
    cout << q.back() << nl;

    cout << q.size() << nl;
    q.pop();
    cout << q.size() << nl;
    

    return 0;
}