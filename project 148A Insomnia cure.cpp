#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k, l, m, n, d,i,s{};
    cin >> k >> l >> m >> n >> d;
    int* z = new int[d];
    for (i = 0; i < d; i++)
    {
        z[i] = i + 1;
    }
    for (i = k - 1; i < d; i += k)
    {
        z[i] = 0;
    }
    for (i = l - 1; i < d; i += l)
    {
        z[i] = 0;
    }
    for (i = m - 1; i < d; i += m)
    {
        z[i] = 0;
    }
    for (i = n - 1; i < d; i += n)
    {
        z[i] = 0;
    }
    for (i = 0; i < d; i++)
    {
        if (z[i]==0)
        {
            s++;
        }
    }
    cout << s;
}