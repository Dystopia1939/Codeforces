#include <iostream>
using namespace std;
int main()
{
    int n, i, s{};
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        if (y[i]-x[i]>=2)
        {
            s += 1;
        }
    }
    cout << s;
}