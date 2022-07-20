#include <iostream>
using namespace std;
int main()
{
    int a, b,n{};
    cin >> a>> b;
	while (a<=b)
	{
		a = 3 * a;
		b = 2 * b;
		n += 1;
	}
	cout << n;
}