/*  
        بسم الله الرحمن الرحيم  
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

int get_total_apple(deque<pair<int, int>> left, deque<pair<int, int>> right)
{
	int total_apples = 0;
	while(true)
	{
		if(left.empty()) break;
		else 
		{
			total_apples += left[0].S;
			left.pop_front();
		}

		if(right.empty()) break;
		else
		{
			total_apples += right[0].S;
			right.pop_front();
		}
	}
	return total_apples;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    deque<pair<int, int>> left, right;
    while(t--)
    {
    	int position, apple; cin >> position >> apple;
    	if(position < 0)
    	{
    		left.push_back(make_pair(-position, apple));
    	}
    	else
    	{
    		right.push_back(make_pair(position, apple));
    	}
    }

    sort(all(left));
    sort(all(right));

    int total_apples = get_total_apple(left, right);
    total_apples = max(total_apples, get_total_apple(right, left));
    cout << total_apples << nl;
    return 0;
}