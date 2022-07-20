#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, h,i,s{};
    cin >> n >> h;
    double* a = new double[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s += ceil(a[i] / h);
    }
    cout << s;
}