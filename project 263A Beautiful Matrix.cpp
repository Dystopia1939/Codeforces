#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x[5][5], a{},i,j,e,f,g,h;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> x[i][j];
			if (x[i][j]==1)
			{
				e=i+1;
				f=j+ 1;
				break;
			}
		}
	}
	g=abs(3 - e);
	h = abs(3 - f);
	cout << h+g;
}