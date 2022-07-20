#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, t,i,j;
    string a; char temp;
    cin >> n >> t >> a;
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] == 'B' && a[j+1] == 'G')
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                j++;
            }
        }
    }
    cout << a;
}