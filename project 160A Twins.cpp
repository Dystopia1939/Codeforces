#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    //Getting input from user
    int NumCoins, Bigger{}, Smaller{},CountMinCoins{},LastParameterOfArray;
    cin >> NumCoins;
    LastParameterOfArray = NumCoins;
    int* RowOfCoins = new int[NumCoins];
    for (int i = 0; i < NumCoins; i++)
        cin >> RowOfCoins[i];
    //sorting array because we need minimum coins
    //as we know sum of larger number take less coins from other ways
    sort(RowOfCoins, RowOfCoins + NumCoins);
    //while functions because we need check sum of largest num and others
    //if largest number was less than sum of others we have to add largest number after that and calvulate sum of others
    //and ...
    while(true)
    {
        Bigger += RowOfCoins[LastParameterOfArray - 1];
        CountMinCoins++;
        for (int i = 0; i < LastParameterOfArray-1; i++)
        {
            Smaller += RowOfCoins[i];
        }
        if (Bigger>Smaller)
        {
            cout << CountMinCoins;
            return 0;
        }
        else
        {
            LastParameterOfArray--;
            Smaller = 0;
        }
    }
}