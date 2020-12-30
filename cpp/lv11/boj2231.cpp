#include <iostream>
using namespace std;

int nextNum(int n)
{
	int tmp = n;
	int next = 0;
	while (n / 10 != 0)
	{
		next += n % 10;
		n /= 10;
	}
	next += (n + tmp);
	return next;
}

int main()
{
	int n, result = 0;	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n == nextNum(i))
		{
			result = i;
			break;
		}
	}
	cout << result;
	return 0;
}
