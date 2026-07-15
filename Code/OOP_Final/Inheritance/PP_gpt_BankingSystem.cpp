#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

class Account
{
public:
	int account_number;
	double balance;
	Account()
	{
		account_number = 0;
		balance = 0.0;
	}
	Account(int account_number, double balance)
	{
		this->account_number = account_number;
		this->balance = balance;
	}

	display_details()
	{
		cout<<"Account Number: "<<account_number<<nl;
		cout<<"Balance: "<<balance<<nl;
	}
};

class Savings_Account:public Account
{
public:
	double interest_rate;
	// Savings_Account()
	// {
	// 	account_number = 0;
	// 	balance = 0.0;
	// 	interest_rate = 0.0;
	// }
	Savings_Account(int an, double b, double ir)
	{
		account_number = an;
		balance = b;
		interest_rate = ir;
	}

	void calculate_interest()
	{
		double interest = balance * (interest_rate/100);
		cout<<"Interest Earned: "<<interest<<nl;
	}
};

int main()
{
	int an; double b, ir;
	cin>>an>>b>>ir;
	Savings_Account mash(an, b, ir);
	mash.display_details();
	mash.calculate_interest();
}