#include <iostream>
using namespace std;
int main()
{
    int width, hole, min{}, sum{}, output;
    cin >> width >> hole;
    int* heigh = new int[width];
    for (int i = 0; i < width; i++) {
        cin >> heigh[i];
        min += heigh[i];
    }
    sum = min;
    output = 0;
    for (int j = 0; j <= width-hole; j++){
        if (sum < min){
            min = sum;
            output = j;
        }
        sum += heigh[j + hole];
        sum -= heigh[j];
    }
    cout << output + 1;
}