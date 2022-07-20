#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i,a{};
	string b;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> b;
		if (b=="X++" || b == "++X")
		{
			a += 1;
		}
		if (b == "X--" || b == "--X")
		{
			a -= 1;
		}
	}
	cout << a;
}