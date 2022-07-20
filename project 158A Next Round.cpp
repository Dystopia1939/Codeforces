#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, i, d{};
	cin >> a >> b;
	int* c = new int[a];
	for (i = 0; i < a; i++)
	{
		cin >> c[i];
	}
	for (i = 0; i < a; i++)
	{
		if (c[i] >= c[b - 1] && c[i] > 0)
		{
			d += 1;
		}
	}
	cout << d;
}