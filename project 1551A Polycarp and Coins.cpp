#include <iostream>
using namespace std;
int main()
{
    int n,i,a,b;
    cin >> n;
    int* x = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
        a = x[i] / 3;
        b = a;
        if (a+b*2==x[i])
        {
            cout << a << "\t" << b << endl;
        }
        else if (a + (b-1) * 2 == x[i])
        {
            cout << a << "\t" << b-1 << endl;
        }
        else if (a + (b+1) * 2 == x[i])
        {
            cout << a << "\t" << b+1 << endl;
        }
        else if ((a-1) + b * 2 == x[i])
        {
            cout << a-1 << "\t" << b << endl;
        }
        else if ((a+1) + b * 2 == x[i])
        {
            cout << a+1 << "\t" << b << endl;
        }
    }
}