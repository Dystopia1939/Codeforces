#include <iostream>

using namespace std;

int main()
{
	int numtestcases, a, b, c, d, count{};
	cin >> numtestcases;
	for (int i = 0; i < numtestcases; i++)
	{
		cin >> a >> b >> c >> d;
		if (b > a)
			count++;
		if (c > a)
			count++;
		if (d > a)
			count++;
		cout << count << endl;
		count = 0;
	}
	return 0;
}