#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int n, k,num;
	cin >> n >> k;
	if (n % 2 == 0)
	{
		if (k > n / 2)
			cout << (k - n / 2) * 2;
		else
			cout << k * 2 - 1;
	}
	else
	{
		if (k > (n+1) / 2)
			cout << (k - n / 2) * 2 - 2;
		else
			cout << k * 2 - 1;
	}
	return 0;
}
