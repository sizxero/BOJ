#include <iostream>
using namespace std;

bool isPelindrome(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (s.at(i) != s.at(s.length() - 1 - i))
			return false;
	return true;
}

int main()
{
	int n; cin >> n;
	string* str = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
		if (!isPelindrome(str[i]))
		{
			cout << 0;
			return 0;
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		if (str[i].at(str[i].length() - 1) != str[i + 1].at(0))
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}