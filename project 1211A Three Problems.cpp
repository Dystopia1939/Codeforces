#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t, min1 = 2000000000, min2 = 2000000000, min3 = 2000000000,index1,index2,index3,tmp[3]; bool x; string check = "";
    cin >> t;
    int* arr = new int[t];
    for (int i = 0; i < t; i++)
    {
        bool x = false;
        cin >> arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[i]==arr[j])
            {
                x = true;
            }
        }
        if (x==false)
        {
            check += arr[i];
        }
    }
    if (check.size()<=2)
    {
        cout << "-1 -1 -1";
        return 0;
    }
    for (int i = 0; i < t; i++)
    {
        if (min1>arr[i])
        {
            index1 = i+1;
            min1 = arr[i];
            tmp[0] = arr[i];
        }
    }
    cout << index1 << " ";
    for (int i = 0; i < t; i++)
    {
        if (min2 > arr[i] && arr[i] != tmp[0])
        {
            index2 = i+1;
            min2 = arr[i];
            tmp[1] = arr[i];
        }
    }
    cout << index2 << " ";
    for (int i = 0; i < t; i++)
    {
        if (min3 > arr[i] && arr[i] != tmp[0] && arr[i] != tmp[1])
        {
            index3 = i+1;
            min3 = arr[i];
        }
    }
    cout << index3;
}