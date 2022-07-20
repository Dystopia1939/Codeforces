#include <iostream>
using namespace std;
int main()
{
	int d[4], a, b, c, i, max = 0, j;
	for (i = 0; i < 4; i++)
	{
		cin >> d[i];
		if (d[i]>max)
		{
			max = d[i];
			j = i;
		}
	}
	while (4-j>0)
	{
		d[j] = d[j + 1];
		j++;
	}
	cout << (d[0] + d[1] - d[2]) / 2 << " ";
	cout << (d[0] - d[1] + d[2]) / 2 << " ";
	cout << (-d[0] + d[1] + d[2]) / 2;
}