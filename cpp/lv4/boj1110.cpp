#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int first, cnt = 1;	cin >> first;
	int tmp = first;
	while (true) 
	{
		int last = tmp / 10 + tmp % 10;
		if (last >= 10)	last %= 10;
		tmp = (tmp % 10) * 10 + last;
		if (tmp == first)
			break;
		else
			cnt++;
	}
	cout << cnt;
	return 0;
}