#include <iostream>
using namespace std;
int main()
{
    int t, j, i,n;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> n;
		for (j = 0; j < n; j++)
		{
			if (j==n-1)
				cout << 1 << endl;
			else 
				cout << j + 2 << " ";
		}
	}
}