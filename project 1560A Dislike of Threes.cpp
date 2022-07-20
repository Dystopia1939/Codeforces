#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c{}, d{}, i, j, f{};
	cin >> a;
	for (j = 0; j < a; j++)
	{
		c = 0;
		d = 0;
		cin >> b;
		for (i = 1; i <= b; i++)
		{
			c += 1;
			if (c % 3 == 0)
			{
				c += 1;
			}
			if (c % 10 == 3)
			{
				c += 1;
			}
			if (c % 3 == 0 || c % 10 == 3)
			{
				c += 1;
			}
		}
		cout << c << endl;
	}
	return 0;
}