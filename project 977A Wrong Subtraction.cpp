#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k, i,j;
    string n,x;
    cin >> n >> k;
    for (i = 0; i < k; i++)
    {
        if (n[size(n)-1]=='0')
        {
            x = "";
            for (j = 0; j < size(n)-1; j++)
            {
                x += n[j];
            }
            n = x;
        }
        else
        {
            switch (n[size(n) - 1])
            {
            case '1':
                n[size(n) - 1] = '0';
                break;
            case '2':
                n[size(n) - 1] = '1';
                break;
            case '3':
                n[size(n) - 1] = '2';
                break;
            case '4':
                n[size(n) - 1] = '3';
                break;
            case '5':
                n[size(n) - 1] = '4';
                break;
            case '6':
                n[size(n) - 1] = '5';
                break;
            case '7':
                n[size(n) - 1] = '6';
                break;
            case '8':
                n[size(n) - 1] = '7';
                break;
            case '9':
                n[size(n) - 1] = '8';
                break;
            default:
                break;
            }
        }
    }
    cout << n;
}