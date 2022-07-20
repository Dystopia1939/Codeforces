#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b; int n, i;
    cin >> a;
    n = size(a);
    for (i = 0; i < n; i++)
    {
        if (a[i]=='.'&& a[i+1]=='.')
        {
            b += "0";
        }
        else if (a[i] == '.' && a[i + 1] == NULL)
        {
            b += "0";
        }
        else if (a[i] == '.' && a[i + 1] == '-')
        {
            b += "0";
        }
        else if (a[i] == '-' && a[i + 1] == '.')
        {
            b += "1";
            i++;
        }
        else if (a[i] == '-' && a[i + 1] == '-')
        {
            b += "2";
            i++;
        }
    }
    cout << b;
}