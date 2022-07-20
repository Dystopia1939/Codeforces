#include <iostream>
using namespace std;
int main()
{
	int k, n, w, sum{},i,t=1;
    cin >> k >> n >> w;
	for (i = 0; i < w; i++)
	{
		sum += t * k;
		t += 1;
	}
	sum -= n;
	if (sum<0)
	{
		sum = 0;
	}
	cout << sum;
}