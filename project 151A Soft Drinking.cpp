#include <iostream>
using namespace std;
int min(int x1,int x2)
{
    if (x1>x2)
    {
        return x2;
    }
    else
    {
        return x1;
    }
}
int main()
{
    int n, b, ml, lime, slice, salt, nml, nsalt, t, z,d,a;
    cin >> n >> b >> ml >> lime >> slice >> salt >> nml >> nsalt;
    t = b * ml; z = lime * slice;
    d = t / nml;
    salt /= nsalt;
    a = min(d, z);
    a = min(a, salt);
    cout << a/n;
}