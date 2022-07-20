#include <iostream>
using namespace std;
int main()
{
    int n,i,s=1;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (s<=n)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] == s)
            {
                cout << i + 1;
                if (s!=n)N
                {
                    cout << " ";
                }
                s += 1;
                break;
            }
        }
    }
}