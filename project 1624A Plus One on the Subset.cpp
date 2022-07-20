#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t, n, i, j, max, g, min, s,b; bool x; string y;
    cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> n; x = true;
		max = g = 0;
		int* x = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> x[i];
			if (x[i] > max)
			{
				max = x[i];
			}
		}
		b = 50;
		while (b>0)
		{
			min = 1e9;
			for (i = 0; i < n; i++)
			{
				if (x[i] == max)
				{
					continue;
				}
				s = max - x[i];
				if (s < min)
				{
					min = s;
				}
			}
			if (min!=1e9)
			{
				for (i = 0; i < n; i++)
				{
					if (x[i] != max)
					{
						x[i] += min;
					}
				}
				g += min;
			}
			b--;
		}
		cout << g << endl;
	}
}