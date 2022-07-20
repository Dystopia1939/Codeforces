#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len, i, j, f,s{}; string a,z; bool x;
    cin >> len >> a;
	for (i = 0; i < len; i++)
	{
		if (a[i]>='A'&&a[i]<='Z')
		{
			a[i] += 32;
		}
	}
    for (i = 0; i < len; i ++)
    {
        x = true;
        for (j = 0; j < s; j++)
        {
            if (a[i] == z[j])
            {
                x = false;
                break;
            }
            else
            {
                x = true;
            }
        }
        if (x == true)
        {
            z += a[i];
            s += 1;
        }
    }
    if (size(z)==26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}