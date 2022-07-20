#include <iostream>
using namespace std;
int main()
{
	int n, i = 1 , j=0, g{};
    cin >> n;
	while (true)
	{
		j += (i * (i + 1)) / 2;
		if (j >= n)
		{
			if (j==n)
			{
				cout << g + 1;
				return 0;
			}
			else
			{
				cout << g;
				return 0;
			}
		}
		g++; i++;
	}
}