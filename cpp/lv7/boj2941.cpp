#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() 
{
	char str[100];
	int len = 0, cnt = 0;

	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=' || str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == 'z' && str[i + 2] == '=')
				i += 2;
			else if (str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'l' || str[i] == 'n')
		{
			if (str[i + 1] == 'j')
				i++;
		}
		else if (str[i] == 's' || str[i] == 'z')
		{
			if (str[i + 1] == '=')
				i++;
		}
		cnt++;
	}

	cout << cnt;
	return 0;
}