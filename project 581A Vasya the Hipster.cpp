#include <iostream>
using namespace std;
int main()
{
    int a, b, s{}, t{}, i;
    cin >> a>> b;
	if (a>b)
	{
		cout << b << " " << (a - b) / 2;
	}
	else if (b>a)
	{
		cout << a << " " << (b - a) / 2;
	}
	else
	{
		cout << a << " " << 0;
	}
}