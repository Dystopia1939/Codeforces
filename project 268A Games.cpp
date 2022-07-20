// project 268A Games.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, s{};
    cin >> n;
    int* x = new int[n];
    int* y = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            else
            {
                if (x[i]==y[j])
                {
                    s += 1;
                }
            }
        }
    }
    cout << s;
}