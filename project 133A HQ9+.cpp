#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i]=='H')
		{
			cout << "YES";
			return 0;
		}
		else if (input[i] == 'Q')
		{
			cout << "YES";
			return 0;
		}
		else if (input[i] == '9')
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;

}