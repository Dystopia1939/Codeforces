#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i,s{};
    string a;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a=="Tetrahedron")
        {
            s += 4;
        }
        else if (a=="Cube")
        {
            s += 6;
        }
        else if (a=="Octahedron")
        {
            s += 8;
        }
        else if (a=="Dodecahedron")
        {
            s += 12;
        }
        else
        {
            s += 20;
        }
    }
    cout << s;
}