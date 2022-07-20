#include <iostream>
using namespace std;
int main()
{
    int n, i, max{},l=0, min = 101, s, t, temp,c{},j;
    cin >> n;
    int* x = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
        if (x[i]>max)
        {
            max = x[i];
            s = i;
        }
        if (x[i]<=min)
        {
            for (j = 0; j < n; j++)
            {
                if (x[i]==x[j])
                {
                    if (j>i)
                    {
                        min = x[j];
                        t = j;
                    }
                    else
                    {
                        min = x[i];
                        t = i;
                    }
                }
            }
        }
    }
    if (t>s)
    {
        cout << s + (n - t-1);
        return 0;
    }
    while (t<n-1)
    {
        if (x[t] == min && x[t + 1] == max&&l==0)
        {
            s -= 1;
            l = 1;
        }
        temp = x[t];
        x[t] = x[t + 1];
        x[t + 1] = temp;
        c += 1;
        t += 1;        
    }
    while (s>0)
    {
        temp = x[s];
        x[s] = x[s - 1];
        x[s - 1] = temp;
        c += 1;
        s -= 1;
    }
    cout << c;
}