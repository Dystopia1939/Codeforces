#include <iostream>
using namespace std;

int main()
{
    int n, x, t , apartment,floor;
    cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> x;
		if (n <= 2)
			cout << 1 << endl;
		else
		{
			floor = 1; apartment = 0;
			apartment = x + 2; floor++;
			while (apartment < n)
			{
				apartment += x; floor++;
			}
			cout << floor << endl;
		}
	}
}