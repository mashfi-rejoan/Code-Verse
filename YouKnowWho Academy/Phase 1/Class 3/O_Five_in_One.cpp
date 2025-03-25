#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    cout << "The maximum number : " << mx << nl;
    cout << "The minimum number : " << mn << nl;

    int count_of_prime = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        if (v[i] == 1)
        {
            flag = false;
        }
        int j = 2;
        while (j < v[i])
        {
            if (v[i] % j == 0)
            {
                flag = false;
                break;
            }
            else
            {
                j++;
            }
        }

        if (flag)
            count_of_prime++;
    }

    cout << "The number of prime numbers : " << count_of_prime << nl;

    int count_of_palindrome = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 10)
        {
            count_of_palindrome++;
        }
        else
        {
            if (v[i] % 11 == 0)
                count_of_palindrome++;
        }
    }

    cout << "The number of palindrome numbers : " << count_of_palindrome << nl;

    int num = v[0];
    int mx_divisor = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 1; j < v[i]; j++)
        {
            if(v[i]%j==0)
            {
                cnt++;
            }
        }
        if(cnt>mx_divisor)
        {
            mx_divisor = cnt;
            num = v[i];
        }
        else if(cnt==mx_divisor)
        {
            num = max(num, v[i]);
        }
        
    }

    cout << "The number that has the maximum number of divisors : " << num << nl;

    return 0;
}