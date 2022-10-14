#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numtestcases;
	string input,afterchange;
	cin >> numtestcases;
	for (int i = 0; i < numtestcases; i++)
	{
		cin >> input;
		for (int j = 0; j < 3;j++)
			afterchange+=toupper(input[j]);
		if (afterchange=="YES")
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		afterchange="";
	}
	return 0;
}