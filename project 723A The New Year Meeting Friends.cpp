#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, i,sum,min=300;
    cin >> x1>> x2>> x3;
	for (i = 1; i <= 100; i++)
	{
		sum = 0;
		sum +=abs( x1 - i);
		sum += abs(x2 - i);
		sum += abs(x3 - i);
		if (sum<min)
		{
			min = sum;
		}
	}
	cout << min;
}