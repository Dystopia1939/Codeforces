#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, a[4], n,s=1000,temp;
    cin >> n;
	temp = n;
	for (i = 0; i < 4; i++)
	{
		a[i] = n / s;
		n = n - a[i] * s;
		s /= 10;
	}
	a[3] += 1;
	if (a[3]==10)
	{
		a[3] = 0;
		a[2] += 1;
		if (a[2]==10)
		{
			a[2] = 0;
			a[1] += 1;
			if (a[1] == 10)
			{
				a[1] = 0;
				a[0] += 1;
			}
		}
	}
	i = 0;
	while (true)
	{
		if (a[i] != a[i + 1] && a[i] != a[i + 2] && a[i] != a[i + 3] && a[i + 1] != a[i + 2] && a[i + 1] != a[i + 3] && a[i + 2] != a[i + 3])
		{
			for (i = 0; i < 4; i++)
			{
				cout << a[i];
			}
			break;
		}
		else
		{
			a[3] += 1;
			if (a[3] == 10)
			{
				a[3] = 0;
				a[2] += 1;
				if (a[2] == 10)
				{
					a[2] = 0;
					a[1] += 1;
					if (a[1] == 10)
					{
						a[1] = 0;
						a[0] += 1;
					}
				}
			}
		}
	}
}