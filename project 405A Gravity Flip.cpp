#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int LengthOfArray;
    cin >> LengthOfArray;
    int* Column = new int[LengthOfArray];
    for (int i = 0; i < LengthOfArray; i++)
        cin >> Column[i];
    sort(Column, Column + LengthOfArray);
    for (int i = 0; i < LengthOfArray; i++)
        cout << Column[i] << " ";
}

//First solution
/*
    int LengthOfArray, Temp,CountCheckFinish{};
    cin >> LengthOfArray;
    int* Column = new int[LengthOfArray];
    for (int i = 0; i < LengthOfArray; i++)
        cin >> Column[i];
    while (CountCheckFinish!=LengthOfArray-1)
    {
        CountCheckFinish = 0;
        for (int i = 0; i < LengthOfArray-1; i++)
        {
            if (Column[i] > Column[i + 1])
            {
                Temp = Column[i];
                Column[i] = Column[i + 1];
                Column[i + 1] = Temp;
            }
            else
            {
                CountCheckFinish++;
            }
        }
    }
    for (int i = 0; i < LengthOfArray; i++)
        cout << Column[i] << " ";
*/