#include <iostream>
using namespace std;
int main()
{
	int i, j, s, t,r, f,g; char a1[150], a2[150], a3[150], z = 'A';
	cin >> a1 >> a2 >> a3;
	s = strlen(a1);
	t = strlen(a2);
	r = strlen(a3);
	while (z<=90)
	{
		f = 0; g = 0;
		for (i = 0; i < s; i++)
		{
			if (a1[i]==z)
			{
				f++;
			}
		}
		for (i = 0; i < t; i++)
		{
			if (a2[i] == z)
			{
				f++;
			}
		}
		for (i = 0; i < r; i++)
		{
			if (a3[i] == z)
			{
				g++;
			}
		}
		if (g!=f)
		{
			cout << "NO";
			return 0;
		}
		z += 1;
	}
	cout << "YES";
}