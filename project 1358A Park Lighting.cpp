#include <iostream>
using namespace std;
int main()
{
    int n, m, t, i;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> m >> t;
		if (m%2==0||t%2==0)
		{
			cout << (m * t) / 2 << endl;
		}
		else
		{
			cout << ((m * t) / 2)+1 << endl;
		}
	}
}