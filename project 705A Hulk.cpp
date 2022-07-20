#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
	for (i = 0; i < n; i++)
	{
		if (i%2==1)
		{
			if (i<n-1)
			{
				cout << "I love that";
			}
			else
			{
				cout << "I love it";
			}
		}
		else
		{
			if (i<n-1)
			{
				cout << "I hate that";
			}
			else
			{
				cout << "I hate it";
			}
		}
		if (i!=n-1)
		{
			cout << " ";
		}
	}
}