#include <iostream>
using namespace std;
int main()
{
    int input,s{};
    cin >> input;
	while (input>0)
	{
		if (input>=100)
		{
			input -= 100;
			s += 1;
		}
		else if (input>=20)
		{
			input -= 20;
			s += 1;
		}
		else if (input >= 10)
		{
			input -= 10;
			s += 1;
		}
		else if (input >= 5)
		{
			input -= 5;
			s += 1;
		}
		else if (input >= 1)
		{
			input -= 1;
			s += 1;
		}
	}
	cout << s;
}