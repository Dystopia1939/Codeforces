#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, p, q, g, j=0; bool e;
    cin >> n>>p;
    int* z = new int[n];
    int* x = new int[p];
    for (i = 0; i < p; i++)
    {
        e = false;
        cin >> x[i];
        for (g = 0; g < n; g++)
        {
            if (x[i]==z[g])
            {
                e = true;
            }
        }
        if (e==false)
        {
            z[j] = x[i];
            j += 1;
        }
    }
    cin >> q;
    int* y = new int[q];
    for (i = 0; i < q; i++)
    {
        e = false;
        cin >> y[i];
        for (g = 0; g < n ; g++)
        {
            if (y[i] == z[g])
            {
                e = true;
            }
        }
        if (e == false)
        {
            z[j] = y[i];
            j += 1;
        }
    }
    if (j==n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}