#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long n, i, j, a,g,k,d,f,h; string b,c;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		g = 0;
		cin >> b;
		d = stoi(b);
		a = size(b);
		if (a==1)
		{
			a = stoi(b);
			cout << a << endl;
		}
		else
		{
			for (i = 1; i <= a; i++)
			{
				c = "";
				for (k = 0; k < i; k++)
				{
					c += '1';
				}
				f = stoi(c);
				for (k = 1; k < 10; k++)
				{
					if (f*k<=d)
					{
						g++;
					}
				}
			}
			cout << g << endl;
		}
	}
}