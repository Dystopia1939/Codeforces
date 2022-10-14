#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numtestcases;
	string input;
    cin >> numtestcases;
	for (int i = 0; i < numtestcases; i++)
	{
		cin >> input;
		if (input[0] + input[1] + input[2] == input[3] + input[4] + input[5])
			cout << "YES"<<endl;
		else
			cout << "NO"<<endl;
	}
	return 0;
}