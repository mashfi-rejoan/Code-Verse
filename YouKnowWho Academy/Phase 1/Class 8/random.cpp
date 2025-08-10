#include <iostream>
#include <vector>
#define trace(x) cout << #x << ": " << x << " \n";
using namespace std;

// Prints all subarrays in arr[0..n-1]
void subArray(vector<int> &arr)
{
    int n = arr.size();

    // Pick starting point
    for (int i = 0; i < n; i++)
    {
        // Pick ending poin

        for (int j = i; j < n; j++)
        {
          int sum = 0;
            // Print subarray between current starting
            // and ending points
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
                sum += arr[k];
            }

            cout << endl;
            trace(sum);
        }
    }
}

int main()
{
    vector<int> arr = {-1, 3, -1, 3, -1, 3};
    cout << "All Non-empty Subarrays\n";
    subArray(arr);
    return 0;
}