#include <iostream>
#include <vector>
using namespace std;

bool isHansu(int n)
{
	if (n / 100 == 0)
		return true;
	else if (n > 100 && n < 1000)
	{
		int a1 = n / 100;
		int a2 = n / 10 % 10;
		int d = a2 - a1;
		return n % 10 == a2 + d;
	}
	else
	{
		int a1 = n / 1000;
		int a2 = n / 100 % 10;
		int a3 = n / 10 % 10;
		int a4 = n % 10;
		int d = a2 - a1;
		if (a3 != a2 + d)
			return false;
		else
		{
			return a4 == a3 + d;
		}
	}
}

int howmany(int n)
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (isHansu(i))	cnt++;
	}
	return cnt;
}

int main()
{
	int n; cin >> n;
	cout << howmany(n);
	return 0;
}