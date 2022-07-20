#include <iostream>
using namespace std;
int main()
{
	int n, i, a, b, c,l,s{};
    cin >> n;
	for (i = 0; i < n; i++)
	{
		l = 0;
		cin >> a >> b >> c;
		if (a==1)
		{
			l += 1;
		}
		if (b==1)
		{
			l += 1;
		}
		if (c == 1)
		{
			l += 1;
		}
		if (l>=2)
		{
			s += 1;
		}
	}
	cout << s;
}