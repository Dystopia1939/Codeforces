#include <iostream>
#include <cmath>
using namespace std;
int max(int x1, int x2)
{
	if (x1>x2)
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
    int t, n, a, b, c, i, g, h;
    cin >> t;
	for (i = 0; i < t; i++)
	{
		h = 0;
		cin >> a >> b >> c >> n;
		g = max(a, b);
		g = max(g, c);
		h += abs(a - g); h += abs(b - g); h += abs(c - g);
		n -= h;
		if (n<0||n%3!=0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}