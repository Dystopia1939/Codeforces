#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,n,s{},r{};
    string g;
    cin >> n >> g;
    for (i = 0; i < n; i++)
    {
        if (g[i]=='A')
        {
            r += 1;
        }
        else
        {
            s += 1;
        }
    }
    if (r>s)
    {
        cout << "Anton";
    }
    else if (s>r)
    {
        cout << "Danik";
    }
    else if (s==r)
    {
        cout << "Friendship";
    }
}