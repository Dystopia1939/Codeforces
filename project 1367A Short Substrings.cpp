#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, i, j; string x;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		cout << x[0];
		for (j = 1; j < size(x)-1; j+=2)
		{
			cout << x[j];
		}
		cout << x[size(x)-1]<<endl;
	}
}