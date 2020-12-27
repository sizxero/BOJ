#include <iostream>
using namespace std;

int main()
{
	int t; cin >> t;
	string* arr = new string[t];
	for (int i = 0; i < t; i++)
	{
		string result;
		cin >> result;
		arr[i] = result;
	}
	
	for (int i = 0; i < t; i++)
	{
		string str = arr[i];
		int score = 0, combo = 0;
		for (int i = 0; i < size(str); i++)
		{
			if (str.at(i) == 'O')
			{
				combo++;
				score += combo;
			}
			else
			{
				combo = 0;
			}

		}
		cout << score << "\n";
	}
	return 0;
}