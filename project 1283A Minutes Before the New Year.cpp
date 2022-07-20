#include <iostream>
using namespace std;
int main()
{
    int n, a, b, i;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		a = 24 - a;
		b = (a * 60) - b;
		cout << b << endl;
	}
}