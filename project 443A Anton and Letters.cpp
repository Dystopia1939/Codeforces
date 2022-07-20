    #include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, n, j, s{}, f{}; bool x;
    char a[1000], z[1000];
    fgets(a, 1000, stdin);
    n = strlen(a) - 1;
    for (i = 1; i < n; i += 3)
    {
        if (a[1]=='}')
        {
            break;
        }
        x = true;
        for (j = 0; j < s; j++)
        {
            if (a[i] == z[j])
            {
                x = false;
                break;
            }
            else
            {
                x = true;
            }
        }
        if (x == true)
        {
            z[s] = a[i];
            s += 1;
        }
    }
    cout << s;
}