#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> st;
    st.push(20);
    st.push(10);
    st.push(10);
    st.push(20);

    cout << st.size() << nl; 
    
	while(!st.empty())
	{
	    cout << st.top() << nl;
	    st.pop();
	}

	  

    return 0;
}