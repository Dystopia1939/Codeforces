#include <iostream>
using namespace std;
int min(int x1,int x2)
{
	if (x1>x2)
	{
		return x2;
	}
	else
	{
		return x1;
	}
}
int max(int x1, int x2)
{
	if (x1 > x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}
int main()
{
	int n, a[4], i, max1, max2, min1, j; bool x;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		x = true;
		for (i = 0; i < 4; i++)
		{
			cin >> a[i];
		}
		if (a[0]>a[1])
		{
			max1 = a[0];
		}
		else if(a[1] > a[0])
		{
			max1 = a[1];
		}
		if (a[2] > a[3])
		{
			max2 = a[2];
		}
		else if (a[3] > a[2])
		{
			max2 = a[3];
		}
		min1 = min(max1, max2);
		max1 = max(max1, max2);
		for (i = 0; i < 4; i++)
		{
			if (a[i]>min1)
			{
				if (a[i]!=max1)
				{
					x = false;
					break;
				}
			}
		}
		if (x==false)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}