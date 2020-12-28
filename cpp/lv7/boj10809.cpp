#include <iostream>
using namespace std;

int main()
{
	string s;	cin >> s;
	int alphacnt[26];	fill_n(alphacnt, 26, -1);
	for (int i = 0; i < s.size(); i++)
	{
		if(alphacnt[s.at(i) - 'a'] == -1)
			alphacnt[s.at(i) - 'a'] = i;
	}
	
	for (int i = 0; i < 26; i++)
		cout << alphacnt[i] << " ";
}