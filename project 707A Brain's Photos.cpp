#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, m, i, j; bool x = true; char a[100][100];
	cin >> n >> m;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
			if (a[i][j]=='C'|| a[i][j] == 'Y'|| a[i][j] == 'M')
			{
				x = false;
			}
		}
	}
	if (x==false)
	{
		cout << "#Color";
	}
	else
	{
		cout << "#Black&White";
	}
}