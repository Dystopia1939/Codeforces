#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    cin >> input;
	for (int i = 0; i < size(input); i++)
	{
		if (input[i]=='i'|| input[i] == 'o' || input[i] == 'u' || input[i] == 'e' || input[i] == 'a' || input[i] == 'y' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U' || input[i] == 'E' || input[i] == 'A' || input[i] == 'Y')
		{
			input.erase(i,1);
			i--;
		}
	}
	for (int i = 0; i <= size(input); i++) {
		if (input[i] >= 65 && input[i] <= 92)
		{
			input[i] = input[i] + 32;
		}
	}
	int k = size(input)*2;
	string result;
	int j = 0;
	for (int i = 0; i < k; i++)
	{
		if (i%2==0)
		{
			result += ".";
		}
		else
		{
			result += input[j];
			j++;
		}
	}
	cout << result;
}
