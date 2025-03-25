#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

const int N = 1e3 + 9;

struct Deque
{
	int a[2 * N];
	int start = N, end = N - 1;

	void push_front(int x)
	{
		start--;
		a[start] = x;
	}

	void push_back(int x)
	{
		end++;
		a[end] = x;
	}

	void pop_front()
	{
		if(start > end)
		{
			cout << "Queue is empty.\n";
			return;
		}
		
		start++;
	}

	void pop_back()
	{
		if(start > end)
		{
			cout << "Queue is empty.\n";
			return;
		}
		
		end--;
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

    
    Deque dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);
    cout << dq.front() << '\n'; // Output: 20
    cout << dq.back() << '\n'; // Output: 40
    dq.pop_front();
    cout << dq.front() << '\n'; // Output: 10
    cout << dq.back() << '\n'; // Output: 40
    dq.pop_back();
    cout << dq.front() << '\n'; // Output: 10
    cout << dq.back() << '\n'; // Output: 30
    dq.pop_front();
    cout << dq.front() << '\n'; // Output: 30
    cout << dq.back() << '\n'; // Output: 30
    dq.pop_back();
    cout << dq.front() << '\n'; // Output: The deque is empty! Can't get the front element!
    cout << dq.back() << '\n'; // Output: The deque is empty! Can't get the back element!
    dq.pop_front(); // Output: The deque is empty! Can't pop from the front!
    dq.pop_back(); // Output: The deque is empty! Can't pop from the back!

    return 0;
}