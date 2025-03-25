#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

struct Address
{
	string city;
	int house_num;
	int zip_code;

	void details()
	{
		cout << "House " << house_num << ", " << city << ", " << zip_code << nl;
	}

	Address()
	{
		city = "Comilla";
		house_num = 100;
		zip_code = 2000;
	}

	Address(string _city, int _house_num, int _zip_code)
	{
		city = _city;
		house_num = _house_num;
		zip_code = _zip_code;
	}
};

struct Student
{
	string name;
	int roll_number;
	vector<int> marks;
	Address address;
	
} a[5];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1;
    s1.name = "Bapparaj";
    s1.roll_number = 101;
    s1.marks = {90, 85, 95, 78, 88};
    s1.address.city = "Dhaka";
    s1.address.house_num = 70;
    s1.address.zip_code = 1230;
     
    cout << "Student Name: " << s1.name << nl;
    cout << "Roll Number: " << s1.roll_number << nl;
    cout << "Marks: ";
    for(auto mark : s1.marks)
    {
    	cout << mark << ' ';
    }
    cout << nl;

    cout << "Address: House " << s1.address.house_num << ", " << s1.address.city << ", " << s1.address.zip_code << nl;

    a[0] = s1;
    a[1] = {"Joshim", 102, {80, 85, 75, 78, 88}};
    a[1].address.details();

    a[1].address = Address("Chittagong", 80, 2000);
    a[1].address.details();

    return 0;
}