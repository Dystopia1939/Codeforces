#include <iostream>
using namespace std;
int main()
{
    int t, i, s,f,a,b,c,d;
    cin >> t;
	for (i = 0; i < t; i++)
	{
		s = -1;
		cin >> f;
		if (f>2)
		{
			if (f % 2 == 0)
			{
				f /= 2;
				a = f -1;
			}
			else
			{
				a = f / 2;
			}
			cout << a<<endl;
		}
		else
		{
			cout << 0 <<endl;
		}
	}
}