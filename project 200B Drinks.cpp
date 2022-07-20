#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, n; double f{},s;
    cin >> n;
    double* a = new double[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        f += a[i];
    }
    s = (f / (n * 100)) * 100;
    cout << fixed << setprecision(12) << s;
}