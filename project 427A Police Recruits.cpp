#include <iostream>
using namespace std;
int main()
{
    int n, i, s{},a,t{};
    cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a==-1)
		{
			if (s==0)
			{
				t++;
			}
			else
			{
				s--;
			}
		}
		else
		{
			s += a;
		}
	}
	cout << t;
}