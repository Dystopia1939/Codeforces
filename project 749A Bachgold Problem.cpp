#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cout << a / 2 << endl;
    while (a > 0)
    {
        if (a == 3)
        {
            cout << 3;
            break;
        }
        cout << 2 << "\t";
        a -= 2;
    }
}