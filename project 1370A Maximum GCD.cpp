#include <iostream>
using namespace std;
int main()
{
    int n, a, i;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a%2==0)
		{
			cout << a / 2 << endl;
		}
		else
		{
			a--;
			cout << a / 2 << endl;
		}
	}
}