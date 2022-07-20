#include <iostream>
using namespace std;
int min(int x1, int x2)
{
	if (x1<x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}
int max(int x1, int x2)
{
	if (x1 < x2)
	{
		return x2;
	}
	else
	{
		return x1;
	}
}
int main()
{
	int n, t, i, j, min1, min2,x,y,z,s; long long m;
	cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> n;
		m = 0; min1 = 1e9; min2 = 1e9;
		int* a = new int[n];
		int* b = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			min1 = min(min1, a[i]);
		}
		for (i = 0; i < n; i++)
		{
			cin >> b[i];
			min2 = min(min2, b[i]);
		}
		for (i = 0; i < n; i++)
		{
			if (a[i]>min1&&b[i]>min2)
			{
				x = a[i] - min1; y = b[i] - min2;
				if (x<y)
				{
					z = x;
					m += z;
					m += y - x;
				}
				else if(y<x)
				{
					z = y;
					m += z;
					m += x - y;
				}
				else
				{
					m += x;
				}
			}
			else if (a[i] > min1 && b[i] == min2)
			{
				m += a[i] - min1;
			}
			else if (a[i] == min1 && b[i] > min2)
			{
				m += b[i] - min2;
			}
			else if (a[i] == min1 && b[i] == min2)
			{
				continue;
			}
		}
		cout << m << endl;
	}
}