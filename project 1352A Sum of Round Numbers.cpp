#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i,a,j,k,c,m;
    string x,z,f;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        m = 0;
        cin >> x;
        a = size(x);
        c = a;
        for (j = 0; j < a; j++)
        {
            if (x[j]!='0')
            {
                m++;
            }
        }
        cout << m << endl;
        for (j = 0; j < c; j++)
        {
            a--;
            if (a==0)
            {
                break;
            }
            if (x[j]=='0')
            {
                continue;
            }
            else
            {
                z = ""; f = "";
                for (k = 0; k < a; k++)
                {
                    z += "0";
                }
                f = x[j]+z;
                cout << f << "\t";
            }
        }
        if (x[c-1]!='0')
        {
            cout << x[c - 1] << endl;
        }
    }
}