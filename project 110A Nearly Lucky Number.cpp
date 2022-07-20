#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,s{};
    string a;
    cin >> a;
    for (i = 0; i < size(a); i++)
    {
        if (a[i]=='4' || a[i]=='7')
        {
            s += 1;
        }
    }
    if (s==4||s==7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}   