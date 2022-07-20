#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, k, i, j;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		cin >> a >> b >> k;
		c = k % a;
		if (c>b)
		{
			cout << k - (c - b) << endl;
		}
		else
		{
			if (c == b)
			{
				cout << k << endl;
			}
			else
			{
				k = k - ((a - b) + c);
				if (k < 0)
				{
					k = 0;
				}
				cout << k << endl;
			}
		}
	}
}