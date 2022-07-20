#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, i;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a==b)
		{
			cout << 0 << endl;
		}
		else if (a>b)
		{
			c = a - b;
			if (c%2==0)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 2 << endl;
			}
		}
		else if (b>a)
		{
			c = b - a;
			if (c % 2 == 0)
			{
				cout << 2 << endl;
			}
			else
			{
				cout << 1 << endl;
			}
		}
	}
}