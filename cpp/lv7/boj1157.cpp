#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s;	cin >> s;
	transform(s.cbegin(), s.cend(), s.begin(), toupper);
	int arr[26] = {0, };	int max = 0, maxidx = 0;
	
	for(int i = 0; i < s.size(); i++)
	{
		arr[s.at(i) - 'A']++;
		if (max < arr[s.at(i) - 'A'])
		{
			max = arr[s.at(i) - 'A'];
			maxidx = i;
		}
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max)
			cnt++;
		if (cnt >= 2)
		{
			cout << "?";
			return 0;
		}
	}
	cout << s.at(maxidx);
	return 0;
}