#include <iostream>
using namespace std;
int main()
{
    int n, i,s{},max, min;
    cin >> n;
	int* x = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	min = x[0]; max=x[0];
	for (i = 0; i < n; i++)
	{
		if (x[i] > max)
		{
			max = x[i]; s++;
		}
		if (x[i] < min)
		{
			min = x[i]; s++;
		}
	}
	cout << s;
}