#include <iostream>
#include <string>
using namespace std;

int main()
{

	int num = 0;	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i) == ' ')
			num++;
	}

	if (s.at(0) == ' ')
		num--;

	if (s.at(s.length() - 1) == ' ')
		num--;

	cout << num + 1;
}
