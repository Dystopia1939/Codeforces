#include <iostream>
using namespace std;
int main()
{
    int t, n, i, j,even, odd,wrong;
    cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> n;
		even = 0; odd = 0; wrong = 0;
		int* x = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> x[i];
			if (x[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		if (n%2==0)
		{
			if (even==odd)
			{
				for (i = 0; i < n; i++)
				{
					if (i%2==0)
					{
						if (x[i]%2!=0)
						{
							wrong++;
						}
					}
					else
					{
						if (x[i] % 2 != 1)
						{
							wrong++;
						}
					}
				}
				cout << wrong / 2 << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else
		{
			if (even==odd+1)
			{
				for (i = 0; i < n; i++)
				{
					if (i % 2 == 0)
					{
						if (x[i] % 2 != 0)
						{
							wrong++;
						}
					}
					else
					{
						if (x[i] % 2 != 1)
						{
							wrong++;
						}
					}
				}
				cout << wrong / 2 << endl;
			}
			else
			{
				cout << -1 << endl;
			}
		}
	}
}