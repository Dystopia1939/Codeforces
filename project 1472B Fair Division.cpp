#include <iostream>
using namespace std;
int main()
{
    int t, n, i, j, a, b;
    cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> n;
		a = 0; b = 0;
		int* x = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> x[i];
			if (x[i]==1)
			{
				//a = 1 gram
				a++;
			}
			else
			{
				//b = 2 gram
				b++;
			}
		}
		if (b % 2 == 0 && a % 2 == 0)
		{
			cout << "YES" << endl;
		}
		else if (b % 2 == 0 && a % 2 != 0)
		{
			cout << "NO" << endl;
		}
		else if (b % 2 != 0 && a % 2 == 0)
		{
			if (a>1)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		else if (b % 2 != 0 && a % 2 != 0)
		{
			cout << "NO" << endl;
		}
	}
}