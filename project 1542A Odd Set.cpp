#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n; int odd = 0;
		int* arr = new int[2 * n];
		for (int j = 0; j < 2*n; j++)
		{
			cin >> arr[j];
			if (arr[j]%2==1)
			{
				odd++;
			}
		}
		if (odd == n)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}