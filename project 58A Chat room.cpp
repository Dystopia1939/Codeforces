#include <iostream>
#include <string>
using namespace std;
int main()
{
    string WordInput;
    cin >> WordInput;
	for (int i = 0; i < size(WordInput); i++)
	{
		if (WordInput[i] == 'h')
		{
			for (int j = i+1; j < size(WordInput); j++)
			{
				if (WordInput[j] == 'e')
				{
					for (int s = j + 1; s < size(WordInput); s++)
					{
						if (WordInput[s] == 'l')
						{
							for (int w = s + 1; w < size(WordInput); w++)
							{
								if (WordInput[w] == 'l')
								{
									for (int t = w + 1; t < size(WordInput); t++)
									{
										if (WordInput[t] == 'o')
										{
											cout << "YES";
											return 0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << "NO";
	return 0;
}