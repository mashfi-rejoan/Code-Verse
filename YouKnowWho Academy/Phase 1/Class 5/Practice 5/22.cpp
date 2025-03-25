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

const int N = 30;
int n; 
vector<int> v[N];

pair<int, int> get_position(int x)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < v[i].size(); j++)
		{
			if(x == v[i][j])
			{
				 return make_pair(i, j);
			}
		}
	}
	return make_pair(-1, -1);
}

void move_to_initial_vector(int vector_id, int pos_in_vector)
{
	for(int i = pos_in_vector + 1; i < v[vector_id].size(); i++)
	{
		int x = v[vector_id] [i];
		v[x].push_back(x);
	}
	v[vector_id].resize(pos_in_vector + 1);
}

void move_on_top_of_vector(int vector_id, int pos_in_vector, int dest_vector)
{
	for(int i = pos_in_vector; i < v[vector_id]. size(); i++)
	{
		int x = v[vector_id][i];
		v[dest_vector].push_back(x);
	}
	v[vector_id].resize(pos_in_vector);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
    	v[i].push_back(i);
    }

    string op;
    while(cin >> op and op != "quit")
    {
    	int a, b; string ty; cin >> a >> ty >> b;
    	auto [vector_id_a, pos_of_a_in_vector] = get_position(a);
    	auto [vector_id_b, pos_of_b_in_vector] = get_position(b);
    	if(vector_id_a == vector_id_b) continue;
    	if(op == "move")
    	{
    		if(ty == "onto")
    		{
    			move_to_initial_vector(vector_id_a, pos_of_a_in_vector);
    			move_to_initial_vector(vector_id_b, pos_of_b_in_vector);
    			move_on_top_of_vector(vector_id_a, pos_of_a_in_vector, vector_id_b);
    		}
    		else
    		{
    			move_to_initial_vector(vector_id_a, pos_of_a_in_vector);
    			move_on_top_of_vector(vector_id_a, pos_of_a_in_vector, vector_id_b);
    		}
    	}
    	else
    	{
    		if(ty == "onto")
    		{
    			move_to_initial_vector(vector_id_b, pos_of_b_in_vector);
    			move_on_top_of_vector(vector_id_a, pos_of_a_in_vector, vector_id_b);
    		}
    		else
    		{
    			move_on_top_of_vector(vector_id_a, pos_of_a_in_vector, vector_id_b);
    		}
    	}
    }
    for(int i = 0; i < n; i++)
    {
    	cout << i << ":";
    	for(int j = 0; j < v[i].size(); j++)
    	{
    		cout << " " << v[i][j];
    	}
    	cout << nl;
    }

    return 0;
}