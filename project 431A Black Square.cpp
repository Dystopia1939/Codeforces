#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i, k,z,c{}; string a, b;
	int* x = new int[4];
	for (i = 0; i < 4; i++)
	{
		cin >> x[i];
	}
	cin >> a;
	k = size(a);
	for (i = 0; i < k; i++)
	{
		b = a[i];
		z = stoi(b);
		z--;
		c += x[z];
	}
	cout << c;
}