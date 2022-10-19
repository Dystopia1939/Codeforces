#include <iostream>
using namespace std;
int main()
{
    int testcase, input;
    cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> input;
		if (360 % (180 - input) == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}