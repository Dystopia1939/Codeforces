#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,j{};
    string s, t,x;
    cin >> s >> t;
    i = size(s) - 1;
    while (i>-1)
    {
        x += s[i];
        i -= 1;
    }
    if (x==t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}