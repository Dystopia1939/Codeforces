#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,i,s{};
    string str;
    cin >> n >> str;
    for (i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            s += 1;
        }
    }
    cout << s;
}