#include <iostream>
using namespace std;
int main()
{
    int n, i, s{}, t{},max;
    cin >> n;
    int* ex = new int[n];
    int* en = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> ex[i] >> en[i];
        s = s -ex[i] + en[i];
        if (t>s)
        {
            continue;
        }
        else
        {
            t = s;
        }
    }
    cout << t;
}