#include <iostream>
using namespace std;

bool isGroupWord(string s)
{
	bool alpha[26];		fill_n(alpha, 26, false);
	for (int i = 0; i < s.length(); i++)
	{
		if (alpha[s.at(i) - 'a'])
			return false;
		else
		{
			char tmp = s.at(i);
			alpha[s.at(i) - 'a'] = true;

			while (1)
			{
				if (tmp != s[++i])
				{
					i--;	break;
				}
			}
		}
	}
	return true;
}
int main()
{
	int n;	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string s;	cin >> s;
		if (isGroupWord(s))
			cnt++;
	}
	cout << cnt;
	return 0;
}