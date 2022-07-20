#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, j, i, l, sum; string a, c;
    cin >> n;
	for (j = 0; j < n; j++)
	{
		cin >> a;
		sum = 0;
		l = size(a);
		int b, d;
		switch (l)
		{
		case 1:
			b = stoi(a);
			b /= 1; b *= 1;
			a = to_string(b);
			c = a[0];
			d = stoi(c);
			d = ((d - 1) * 10) + 1;
			cout << d << endl;
			break;
		case 2:
			b = stoi(a);
			b /= 11; b *= 11;
			a = to_string(b);
			c = a[0];
			d = stoi(c);
			d = ((d - 1) * 10)+3;
			cout << d << endl;
			break;
		case 3:
			b = stoi(a);
			b /= 111; b *= 111;
			a = to_string(b);
			c = a[0];
			d = stoi(c);
			d = ((d - 1) * 10) + 6;
			cout << d << endl;
			break;
		case 4:
			b = stoi(a);
			b /= 1111; b *= 1111;
			a = to_string(b);
			c = a[0];
			d = stoi(c);
			d = d * 10;
			cout << d << endl;
			break;
		default:
			break;
		}
	}
}