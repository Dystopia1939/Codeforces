#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t, n, i, j, k, min; bool x;
    cin >> t;
	for (k = 0; k < t; k++)
	{
		cin >> n;
		x = true; min = 1001;
		int* a = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			for (j = 0; j < i; j++)
			{
				if (a[i]==a[j])
				{
					x = false;
				}
				else
				{
					if (abs(a[i]-a[j])<min)
					{
						min = abs(a[i] - a[j]);
					}
				}
			}
		}
		if (x==false)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << min << endl;
		}
	}
}