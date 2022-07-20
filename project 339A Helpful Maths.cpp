#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i,a{},b{},c{};
    string input,output;
    cin >> input;
	for (i = 0; i < size(input); i+=2)
	{
		if (input[i]=='1')
		{
			a += 1;
		}
		else if (input[i] == '2')
		{
			b += 1;
		}
		else if (input[i] == '3')
		{
			c += 1;
		}
	}
	for (i = 0; i < a; i++)
	{
		cout << "1";
		if (c==0&&b==0&&i == a - 1)
		{
			break;
		}
		cout << "+";
	}
	for (i = 0; i < b; i++)
	{
		cout << "2";
		if (c==0&&i == b - 1)
		{
			break;
		}
		cout << "+";
	}
	for (i = 0; i < c; i++)
	{
		cout << "3";
		if (i==c-1)
		{
			break;
		}
		cout << "+";
	}
}