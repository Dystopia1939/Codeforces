#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
	cin >> input; int dangerous{};
	for (int i = 1; i < size(input); i++)
	{
		if (input[i-1]==input[i])
		{
			dangerous++;
			if (dangerous==6)
			{
				cout << "YES";
				return 0;
			}
		}
		else
		{
			dangerous = 0;
		}
	}
	cout << "NO";
}