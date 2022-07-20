#include <iostream>
using namespace std;
int main()
{
    int w, h, n, i, j,t,s,l;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		t = 1; s = 1;
		cin >> w >> h >> l;
		while (w%2==0)
		{
			w /= 2;
			t *= 2;
		}
		while (h % 2 == 0)
		{
			h /= 2;
			s *= 2;
		}
		i = s * t;
		if (i>=l)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}