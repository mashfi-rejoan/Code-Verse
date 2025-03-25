#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void print(set<int> se)
{
	cout << "set = ";
	for(auto x : se)
    {
    	cout << x << ' ';
    }

    cout << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> se;
    se.insert(5); 
    se.insert(1); 
    se.insert(9); 
    se.insert(2); 
    se.insert(9);

    print(se);

    se.erase(2);
    print(se);

    se.insert(8);
    print(se);

    auto it = se.find(5);
    // cout << *it << nl;
    se.erase(it);
    print(se);

    se.insert(10);
    se.insert(20);
    se.insert(30);
    se.insert(40);
    se.insert(50);
    se.insert(50);
    print(se);

    if(se.find(15) != se.end()) cout << "Founded\n";
    else cout << "Not found\n";

    print(se);
    auto lb = se.lower_bound(22);
    auto ub = se.upper_bound(22);
    cout << *lb << nl;
    cout << *ub << nl;

    auto i = se.begin();
    i++;
    i = next(i, 4);
    cout << *i << nl;
    

    return 0;
}