#include <iostream>
using namespace std;
int main()
{
	int n, i, g{}, a = 1, b;
    cin >> n;
	if (n==2)
	{
		n = 1;
	}
	for (i = 0; i < n/2+1; i++)
	{
		if (a==1)
		{
			g++;
		}
		else
		{
			b = n - a;
			if (b%a==0)
			{
				g++;
			}
		}
		a++;
	}
	cout << g;
}