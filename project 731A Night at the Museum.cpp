#include <iostream>
#include <string>

using namespace std;

string output(string s);

int main()
{
    string input;
    cin >> input;
    output(input);
}

string output(string s)
{
    string alpha; int count{};
    for (int i = 0; i < 26; i++)
    {
        alpha += 'a' + i;
    }
    int t = 0;
    char first = 'a'; bool x = false;
    for (int i = 0; i < s.size(); i++)
    {
        for (int k = 0; k < 14; k++)
        {
            if (s[i] == alpha[k])
            {
                for (int j = 0; j <= 13; j++)
                {
                    if (s[i] == alpha[j])
                    {
                        x = true;
                        break;
                    }
                    count++;
                }
                if (x)
                {
                    break;
                }
            }
        }
        for (int k = 14; k < 26; k++)
        {
            if (s[i] == alpha[k])
            {
                int j = 25;
                while (j > 13)
                {
                    if (s[i] == alpha[j])
                    {
                        count++;
                        x = true;
                        break;
                    }
                    count++; j--;
                }
                if (x)
                {
                    break;
                }
            }
        }
        string tmp1 = "", tmp2 = ""; int m = 0; bool c = true;
        for (int g = 0; g < 26; g++)
        {
            if (s[i] == alpha[g])
            {
                c = false;
            }
            if (c)
            {
                tmp2 += alpha[g];
            }
            else
            {
                tmp1 += alpha[g];
            }
        }
        alpha = tmp1 + tmp2;
    }
    cout << count;
    return alpha;
}