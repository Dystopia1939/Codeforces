#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n, a, b, i, j, s,g{}, h; string x, y;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		g = 1;
		cin >> a >> b;
		s = abs(a - b);
		if (s==0)
		{
			cout << 0 << endl;
			continue;
		}
		x = to_string(s);
		h = size(x);
		if (x[h-1]=='0')
		{
			g = 0;
		}
		y = "";
		for (j = 0; j < h-1; j++)
		{
			y += x[j];
		}
		if (y=="")
		{
			cout << 1 << endl;
			continue;
		}
		h = stoi(y);
		cout << h + g << endl;
	}
}