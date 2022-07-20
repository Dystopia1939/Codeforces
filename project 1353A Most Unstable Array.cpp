#include <iostream>
using namespace std;
int main()
{
	int t, n, m, i, j;
	cin >> t;
	for (j = 0; j < t; j++)
	{
		cin >> n >> m;
		if (n > 2)
		{
			cout << 2 * m<<endl;
		}
		else if (n == 2)
		{
			cout << m<<endl;
		}
		else
		{
			cout << 0<<endl;
		}
	}
}