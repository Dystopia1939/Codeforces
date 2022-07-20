#include <iostream>
using namespace std;
int main()
{
    int t; int x{}, y{}, z{},a,b,c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    
    if (z==0&&y==0&&x==0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}