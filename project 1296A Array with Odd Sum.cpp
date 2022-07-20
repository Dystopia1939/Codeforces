#include <iostream>
using namespace std;
int arr[2000];
int main()
{
    int t, n, i, j, odd, even;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        odd = 0; even = 0;
        cin >> n;
        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] % 2 == 1)
                odd++;
            else
                even++;
        }
        if (even == n)
            cout << "NO" << endl;
        else if (odd == n && n % 2 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}