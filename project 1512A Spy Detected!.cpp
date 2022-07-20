#include <iostream>
using namespace std;
int main()
{
    int n, k, i, j, t;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		cin >> t;
		int* x = new int[t];
		for (i = 0; i < t; i++)
		{
			cin >> x[i];
		}
		for (i = 1; i < t; i++)
		{
			if (x[i]!=x[i-1])
			{
				if (i==1&&x[i]==x[i+1])
				{
					cout << i << endl;
					break;
				}
				cout << i + 1 << endl;
				break;
			}
		}
	}
}