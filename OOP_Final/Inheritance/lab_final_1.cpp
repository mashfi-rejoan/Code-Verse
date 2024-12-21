#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class Participant
{
public:
	string participant_name;
	int participant_id;
	Participant(string pn, int pi)
	{
		participant_name = pn;
		participant_id = pi;
	}
};

class Module
{
public:
	string module_name;
	int module_code;
	Module(string mn, int mc)
	{
		module_name = mn;
		module_code = mc;
	}
};

class Institution
{
public:
	string institution_name, institution_loaction;
	Institution(string in, string il)
	{
		institution_name = in;
		institution_loaction = il;
	}
};

class Registration : public Participant, public Module, public Institution
{
public:
	string registration_date;
	Registration(string pn, int pi, string mn, int mc, string in, string il, string rd) : Participant(pn, pi), Module(mn, mc), Institution(in, il)
	{
		participant_name = pn;
		participant_id = pi;
		module_name = mn;
		module_code = mc;
		institution_name = in;
		institution_loaction = il;
		registration_date = rd;
	}
	void displayDetails()
	{
		cout << "Participant Name: " << participant_name << nl;
		cout << "Participant ID: " << participant_id << nl;
		cout << "Module Name: " << module_name << nl;
		cout << "Module Code: " << module_code << nl;
		cout << "Institution Name: " << institution_name << nl;
		cout << "Institution Loaction: " << institution_loaction << nl;
		cout << "Registration Date: " << registration_date << nl;
	}
};

int main()
{
	string pn, mn, in, il, rd;
	int pi, mc;
	cin >> pn >> pi >> mn >> mc >> in >> il >> rd;
	Registration Mashfi(pn, pi, mn, mc, in, il, rd);
	Mashfi.displayDetails();

	return 0;
}