#include <iostream>
using namespace std;

int main()
{
	int n;	cin >> n;
	if (n % 5 == 0)
		cout << n / 5;
	else if (n % 5 == 1)
	{
		if (n / 5 != 0)
		{
			cout << n / 5 - 1 + 2;
		}
		else
			cout << -1;
	}
	else if (n % 5 == 2)
	{
		if (n / 5 > 1)
		{
			cout << n / 5 - 2 + 4;
		}
		else
			cout << -1;
	}
	else if (n % 5 == 3)
	{
		cout << n / 5 + 1;
	}
	else
	{
		if (n / 5 != 0)
			cout << n / 5 - 1 + 3;
		else
			cout << -1;
	}
	return 0;
}