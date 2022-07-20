#include <iostream>
using namespace std;
int main()
{
    int n,s{};
    cin >> n;
	while (n>4)
	{
		n -= 5;
		s += 1;
	}
	if (n==0)
	{
		cout << s;
	}
	else
	{
		cout << s+1;
	}
}