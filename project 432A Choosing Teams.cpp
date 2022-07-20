#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, i, a;
    cin >> n >> k;
    int* x = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    switch (k)
    {
    case 1:
        a = 0;
        for (i = 0; i < n; i++)
        {
            if (x[i] == 0 || x[i] == 1 || x[i] == 2 || x[i] == 3||x[i]==4)
            {
                a++;
            }
        }
        a /= 3;
        cout << a;
        break;
    case 2:
        a = 0;
        for (i = 0; i < n; i++)
        {
            if (x[i] == 0 || x[i] == 1||x[i]==2||x[i]==3)
            {
                a++;
            }
        }
        a /= 3;
        cout << a;
        break;
    case 3:
        a = 0;
        for (i = 0; i < n; i++)
        {
            if (x[i] == 0 || x[i] == 1||x[i]==2)
            {
                a++;
            }
        }
        a /= 3;
        cout << a;
        break;
    case 4:
        a = 0;
        for (i = 0; i < n; i++)
        {
            if (x[i] == 0||x[i]==1)
            {
                a++;
            }
        }
        a /= 3;
        cout << a;
        break;
    case 5:
        a = 0;
        for (i = 0; i < n; i++)
        {
            if (x[i]==0)
            {
                a++;
            }
        }
        a /= 3;
        cout << a;
        break;
    default:
        break;
    }
}