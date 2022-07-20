#include <iostream>
using namespace std;
int main()
{
    char k[5]; int a, b, c,i,d;
    cin >> k >> a;
    b = strlen(k);
    c = k[b-1] - 48;
    d = c;
    for (i = 1; i < 10; i++)
    {
        c = d;
        c *= i;
        if (c>10)
        {
            if (c % 10 == a)
            {
                break;
            }
            if (c % 10 == 0)
            {
                break;
            }
        }
        else
        {
            if (c == a)
            {
                break;
            }
            if (c % 10 == 0)
            {
                break;
            }
        }
    }
    cout << i;
}