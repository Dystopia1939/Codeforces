#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, t, i, j, k, m; string a; bool x;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		cin >> t >> a;
		for (i = 0; i < t; i++)
		{
			x = true;
			if (a[i]!=a[i+1])
			{
				m = i + 1;
				for (k = m; k < t; k++)
				{
					if (a[i]==a[k])
					{
						x = false;
						break;
					}
				}
			}
			if (x==false)
			{
				cout << "NO" << endl;
				break;
			}
		}
		if (x != false)
		{
			cout << "YES" << endl;
		}
	}
}