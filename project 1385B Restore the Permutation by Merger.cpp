#include <iostream>
using namespace std;
int main()
{
	int t, n, i, j, k, c = 0, dou; bool x = true;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n;
		dou = n * 2;
		int* arr = new int[dou];
		int* tmp = new int[n];
		for (j = 0; j < dou; j++)
		{
			cin >> arr[j];
		}
		for (j = 0; j < dou; j++)
		{
			for (k = 0; k < c; k++)
			{
				if (arr[j] == tmp[k])
				{
					x = false;
					break;
				}
			}
			if (x == true)
			{
				tmp[c] = arr[j];
				c++;
				cout << arr[j] << " ";
			}
			x = true;
		}
		cout << endl;
		c = 0;
		for (j = 0; j < dou; j++)
		{
			arr[j] = NULL;
		}
		for (j = 0; j < n; j++)
		{
			tmp[j] = NULL;
		}
	}
}