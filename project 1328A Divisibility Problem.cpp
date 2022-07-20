#include <iostream>
using namespace std;
int main()
{
    int n, i,a{},j,b,c;
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    for (i = 0; i < n; i++)
    {
        a = 0;
        cin >> x[i] >> y[i];
        if (x[i]%y[i]==0)
        {
            cout << a;
        }
        else
        {
            cout << y[i] - (x[i] % y[i]);
        }
        if (i!=n-1)
        {
            cout << "\n";
        }
    }
}