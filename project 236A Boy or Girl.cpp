#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j,a,n{},l{}; bool x;
    string str,temp;
    cin >> str;
    for (i = 0; i < size(str); i++)
    {
        x = false;
        for (j = 0; j < n; j++)
        {
            if (str[i]==temp[j])
            {
                x = true;
                break;
            }
        }
        if (x==false)
        {
            temp += str[i];
            l += 1;
            n += 1;
        }
    }
    //a = size(temp);
    a = l;
    if (a%2==1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}