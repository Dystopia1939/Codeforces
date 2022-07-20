#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i ,dis='a'-'A';
	bool x = false;
    string a, b,s1,s2;
    cin >> a >> b;
	for (i = 0; i < size(a); i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
		{
			a[i] += dis;
		}
	}
	for (i = 0; i < size(a); i++)
	{
		if (b[i] >= 'A' && b[i] <= 'Z')
		{
			b[i] += dis;
		}
	}
	for (i = 0; i < size(a); i++)
	{
		if (a[i]!=b[i])
		{
			x = true;
			if (a[i]>b[i])
			{
				cout << 1;
			}
			else if (a[i]<b[i])
			{
				cout << -1;
			}
			break;
		}
	}
	if (x==false)
	{
		cout << 0;
	}
}