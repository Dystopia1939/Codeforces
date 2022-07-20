#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, i,x;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		string a,b;
		cin >> a;
		x = a.size();
		b = "";
		if (x %2==1)
			cout << "NO" << endl;
		else
		{
			for (int j = x /2; j <x; j++)
			{
				b += a[j];
				
			}
			
			a.erase(x/2, x/2);
			if (a.compare(b)==0)
				cout << "YES"<<endl;
			else
				cout << "NO" << endl;
		}
	}
}