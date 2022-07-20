#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, j, a, b,m,s;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		m = s = 0;
		cin >> a;
		m += pow(2, a);
		for (i = 0; i < (a/2)-1; i++)
		{
			m += pow(2, i + 1);
		}
		for (i = a/2; i < a; i++)
		{
			s += pow(2, i);
		}
		cout << abs(s - m) << endl;
	}
}