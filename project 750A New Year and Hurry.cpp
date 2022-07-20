#include <iostream>
using namespace std;
int main()
{
	int a, b, c{}, d{}, e, i, j;
	cin >> a >> b;
	for (i = 1; i <= a; i++)
	{
		c = c + (i * 5);
	}
	if (c + b <= 240)
	{
		cout << a;
	}
	else
	{
		for (i = a; i >= 1; i--)
		{
			c = c - (i * 5);
			a -= 1;
			if (c + b <= 240)
			{
				cout << a;
				break;
			}
		}
	}
}