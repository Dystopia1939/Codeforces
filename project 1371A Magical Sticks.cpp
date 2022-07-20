#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int* x = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i]%2==0)
        {
            cout << x[i] / 2 << endl;
        }
        else
        {
            cout << (x[i] / 2) + 1 << endl;
        }
    }
}