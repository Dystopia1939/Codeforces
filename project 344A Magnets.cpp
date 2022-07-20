#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,i,g{};
    cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i]==10 && a[i+1]==01)
        {
            g += 1;
        }
        else if (a[i] == 01 && a[i + 1] == 10)
        {
            g += 1;
        }
    }
    cout << g+1;
}