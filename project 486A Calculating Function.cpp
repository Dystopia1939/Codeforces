#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long x,y,z,t;
	string a;
	cin >> x;
	if (x%2==0)
	{
		cout << (x) / 2;
	}
	else
	{
		cout << (-x - 1) / 2;
	}
}
