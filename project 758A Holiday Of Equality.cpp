#include <iostream>
using namespace std;
int main()
{
    int n, i, sum{}, max{};
    cin >> n;
    int* x = new int[n];
    for ( i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i]>max)
        {
            max = x[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        sum += max - x[i];
    }
    cout << sum;
}