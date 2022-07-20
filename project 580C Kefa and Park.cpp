#include <iostream>
#include <vector>
#include <string>

using namespace std;

//be careful about question because she afraid see cat consecutive m times

int DeleteFromArr(int* arr, int x);

int main()
{
    int vertices, m, j{}, tmp, CountForSheAfraidOrNot{}, AbilityToGoResturant{};
    bool CheckArr = true;
    vector<string> Path;
    string PathTmp="",CheckForResturant="";
    cin >> vertices >> m;
    int* ContainCatOrNot = new int[vertices];
    int* FirstOfEdge = new int[vertices-1];
    int* EndOfEdge = new int[vertices-1];
    for (int i = 0; i < vertices; i++)
        cin >> ContainCatOrNot[i];
    for (int i = 0; i < vertices-1; i++)
        cin >> FirstOfEdge[i] >> EndOfEdge[i];
    while (sizeof(FirstOfEdge) / sizeof(int)!=1)
    {
        j = 0;
        //this part have problem
        //**********************************

        PathTmp += FirstOfEdge[j];
        PathTmp += EndOfEdge[j];
        //**********************************
        tmp = EndOfEdge[j];
        for (int k = 0; k < sizeof(FirstOfEdge) / sizeof(int); k++)
        {
            if (FirstOfEdge[k] == FirstOfEdge[j])
                continue;
            if (FirstOfEdge[k] == tmp)
            {
                PathTmp += EndOfEdge[k];
                tmp = EndOfEdge[k];
                DeleteFromArr(FirstOfEdge, k);
                DeleteFromArr(EndOfEdge, k);
                j = k;
                k = -1;
            }
        }
        Path.push_back(PathTmp);
        PathTmp = "";
    }
    for (int i = 0; i < Path.size(); i++)
    {
        CheckArr = true;
        CheckForResturant = Path[i];
        for (int h = 0; h < CheckForResturant.size() ; h++)
        {
            int temp = (int)CheckForResturant[h];
            if (ContainCatOrNot[temp]==1)
            {
                CountForSheAfraidOrNot++;
                if (CountForSheAfraidOrNot>m)
                {
                    CheckArr = false;
                    break;
                }
            }
            else
            {
                CountForSheAfraidOrNot = 0;
            }
        }
        if (CheckArr)
        {
            AbilityToGoResturant++;
        }
    }
    cout << AbilityToGoResturant;
}

int DeleteFromArr(int* arr , int x)
{
    for (int i = x ; ; ++i)
        arr[i] = arr[i + 1];
}