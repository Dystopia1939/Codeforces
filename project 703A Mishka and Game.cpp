#include <iostream>
using namespace std;
int main()
{
	int n, i, m, c, wm{}, wc{};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> m >> c;
		if (m>c)
		{
			wm++;
		}
		else if (m<c)
		{
			wc++;
		}
	}
	if (wm == wc)
	{
		cout << "Friendship is magic!^^";
	}
	else if (wm > wc)
	{
		cout << "Mishka";
	}
	else
	{
		cout << "Chris";
	}
}