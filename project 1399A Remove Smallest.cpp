#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, i, j, a; bool z;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		z = true;
		cin >> a;
		int* x = new int[a];
		for (j = 0; j < a; j++)
		{
			cin >> x[j];
		}
		sort(x, x + a);
		for (j = 1; j < a; j++)
		{
			if (x[j]-x[j-1]>1)
			{
				cout << "NO" << endl;
				z = false;
				break;
			}
		}
		if (z!=false)
		{
			cout << "YES" << endl;
		}
	}
}