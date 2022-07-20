#include <iostream>
using namespace std;
int main()
{
	int t, n, k, i, j, g, r, f, h;
    cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> n >> k;
		int* b = new int[n];
		int* a = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		g = 0;
		for (r = 0; r < k; r++)
		{
			int min = 31, max = 0;
			for (i = 0; i < n; i++)
			{
				if (a[i]<min)
				{
					min = a[i];
					f = i;
				}
				if (b[i] > max)
				{
					max = b[i];
					h = i;
				}
			}
			if (max>min)
			{
				a[f] = max;
				b[h] = min;
			}
		}
		for (i = 0; i < n; i++)
		{
			g += a[i];
		}
		cout << g << endl;
	}
}