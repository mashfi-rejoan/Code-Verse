/*  
        بسم الله الرحمن الرحيم  
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



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int number_of_teams;
    int scene = 0;
    while(cin >> number_of_teams and number_of_teams > 0)
    {
    	scene++;
    	cout << "Scenario #" << scene << nl;
    	map<int, int> team_id;
	    for(int i = 1; i <= number_of_teams; i++)
	    {
	    	int team_members; cin >> team_members;
	    	while(team_members--)
	    	{
	    		int x; cin >> x;
	    		team_id[x] = i;
	    	}
	    }
	    queue<int> queue_of_teams;
	    map<int, queue<int>> queue_of_team_members;
	    string cmd;
	    while(cin >> cmd and cmd != "STOP")
	    {
	    	if(cmd == "ENQUEUE")
	    	{
	    		int x; cin >> x;
	    		int team = team_id[x];
	    		if(!queue_of_team_members[team].empty())
	    		{
	    			queue_of_team_members[team].push(x);
	    		} 
	    		else 
	    		{
	    			queue_of_teams.push(team);
	    			queue_of_team_members[team].push(x);
	    		}
	    	}
	    	else
	    	{
	    		int team_at_front = queue_of_teams.front();
	    		int team_members_at_front = queue_of_team_members[team_at_front].front();
	    		cout << team_members_at_front << nl;
	    		queue_of_team_members[team_at_front].pop();
	    		if(queue_of_team_members[team_at_front].empty())
	    		{
	    			queue_of_teams.pop();
	    		}
	    	}
	    }
	cout << nl;
    }

    return 0;
}