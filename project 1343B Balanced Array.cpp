#include <iostream>
using namespace std;
int main()
{
    int n, i, a, j, f, sum , sum1;
    cin >> n;
    int* x = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
        a = x[i] / 2;
        if (a%2==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            f = 2; sum = 0; sum1 = 0;
            for (j = 0; j < a; j++)
            {
                cout << f << "\t";
                sum += f;
                f += 2;
            }
            f = 1;
            for (j = 0; j < a-1; j++)
            {
                cout << f << "\t";
                sum1 += f;
                f += 2;
            }
            cout << sum - sum1 << endl;
        }
    }
}