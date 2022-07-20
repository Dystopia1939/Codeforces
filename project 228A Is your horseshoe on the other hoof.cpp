#include <iostream>
using namespace std;
int main()
{
    int a[4],i,s{};
	for (i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < 4; i++)
	{
		if (a[i]==a[i+1] || a[i]==a[i+2] || a[i]==a[i+3])
		{
			s += 1;
		}
	}
	cout << s;
}