#include <iostream>
using namespace std;
int min(int t,int z)
{
	if (t<=z)
	{
		return t;
	}
	else
	{
		return z;
	}
}
int main()
{
	int n, i,a, j,t1{}, t2{}, t3{};
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i]==1)
		{
			t1++;
		}
		else if (x[i]==2)
		{
			t2++;
		}
		else
		{
			t3++;
		}
	}
	a = min(t1, t2);
	a = min(a, t3);
	cout << a << endl;
	if (a!=0)
	{
		for (j = 0; j < a; j++)
		{
			for (i = 0; i < n; i++)
			{
				if (x[i] == 1)
				{
					cout << i+1 << "\t";
					x[i] = 0;
					break;
				}
			}
			for (i = 0; i < n; i++)
			{
				if (x[i] == 2)
				{
					cout << i+1 << "\t";
					x[i] = 0;
					break;
				}
			}
			for (i = 0; i < n; i++)
			{
				if (x[i] == 3)
				{
					cout << i+1 << endl;
					x[i] = 0;
					break;
				}
			}
		}
	}
}