#include <iostream>
using namespace std;
int main()
{
	int n, a, b, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a > 2 * b)
		{
			cout << a * a<<endl;
		}
		else if (b>2*a)
		{
			cout << b * b<<endl;
		}
		else if (a>b)
		{
			cout << 4 * b * b << endl;
		}
		else
		{
			cout << 4 * a * a << endl;
		}
	}
}