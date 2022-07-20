#include <iostream>
using namespace std;

int main()
{
	int i, n, t;
	cin >> t;
	for (int j = 0; j < t; j++)
	{
		cin >> n;
		int* arr = new int[n];
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int k = 0;
		while (k < n)
		{
			if (k % 2 == 0)
			{
				for (i = 0; i < n; i++)
				{
					if (arr[i] != NULL)
					{
						cout << arr[i] << " ";
						arr[i] = NULL;
						break;
					}
				}
			}
			else
			{
				for (i = n - 1; i >= 0; i--)
				{
					if (arr[i] != NULL)
					{
						cout << arr[i] << " ";
						arr[i] = NULL;
						break;
					}
				}
			}
			k++;
		}
		cout << endl;
	}
}
