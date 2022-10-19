#include <iostream>
using namespace std;
int main()
{
    int laptops,max=-1;
    cin >> laptops;
    int** arr = new int*[laptops];
    for (int i = 0; i < laptops; i++)
        arr[i] = new int[2];
    for (int i = 0; i < laptops; i++)
    {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
            if (arr[i][0]>max)
                max = arr[i][0];
        }
    }
    for (int i = 0; i < laptops; i++)
    {
        if (arr[i][0]!=arr[i][1])
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
    return 0;

}
