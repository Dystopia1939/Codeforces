#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, s{}, t{};
	string input;
	cin >> input;
	for (i = 0; i < size(input); i++)
	{
		if (input[i]>='a'&&input[i]<='z')
		{
			s += 1;
		}
		else
		{
			t += 1;
		}
	}
	for (i = 0; i < size(input); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			input[i] += 32;
		}
	}
	if (t>s)
	{
		for (i = 0; i < size(input); i++)
		{
			input[i] -=32;
		}
	}
	cout << input;
}