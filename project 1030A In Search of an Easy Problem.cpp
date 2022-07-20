#include <iostream>
using namespace std;
int main()
{
    int n, i; bool x = false;
    cin >> n;
    int* a = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]==1)
        {
            x = true;
        }
    }
    if (x==true)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}