#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
	if (a%2==1)
	{
		cout << 9 <<"\t"<<a-9;
	}
	else
	{
		cout << 4 << "\t" << a - 4;
	}
}