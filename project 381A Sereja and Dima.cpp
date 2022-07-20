#include <iostream>
using namespace std;
int main()
{
    int n, i, max, j,k, sum1{}, sum2{},turn=0;
    cin >> n;
	int* x = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	i = 0, k = n - 1;
	while (n>0)
	{
		if (turn==0)
		{
			if (x[i] > x[k])
			{
				sum1 += x[i];
				i++; turn++; n--;
			}
			else
			{
				sum1 += x[k];
				k--; turn++; n--;
			}
		}
		else if (turn==1)
		{
			if (x[i] > x[k])
			{
				sum2 += x[i];
				i++; turn--; n--;
			}
			else
			{
				sum2 += x[k];
				k--; turn--; n--;
			}
		}
	}
	cout << sum1 << "\t" << sum2;
}