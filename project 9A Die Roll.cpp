#include <iostream>
using namespace std;
int max(int x1, int x2)
{
	if (x1 > x2)
	{
		return x1;
	}
	else
	{
		return x2;
	}
}
int main()
{
    int y, w, g;
	cin >> y >> w;
	w = max(y, w);
	w = 6 - w;
	switch (w + 1)
	{
	case 1:
		cout << 1 << "/" << 6;
		break;
	case 2:
		cout << 1 << "/" << 3;
		break;
	case 3:
		cout << 1 << "/" << 2;
		break;
	case 4:
		cout << 2 << "/" << 3;
		break;
	case 5:
		cout << w + 1 << "/" << 6;
		break;
	case 6:
		cout << 1 << "/" << 1;
		break;
	default:
		break;
	}
}