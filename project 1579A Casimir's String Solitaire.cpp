#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input; int t;
	cin >> t;
	for (int j = 0; j < t; j++)
	{
		cin >> input;
		int a{}, b{}, c{};
		for (int i = 0; i < size(input); i++)
		{
			if (input[i] == 'A')
			{
				a++;
			}
			else if (input[i] == 'B')
			{
				b++;
			}
			else
			{
				c++;
			}
		}
		b -= a;
		if (b==c)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}