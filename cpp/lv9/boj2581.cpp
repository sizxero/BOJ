#include <iostream>
using namespace std;

int yaksu(int n)
{
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cnt++;
	return cnt;
}
bool isPrime(int n)
{
	if (yaksu(n) == 2)
		return true;
	else
		return false;
}

int main()
{
	int m, n;	cin >> m >> n;
	bool isMin = false;
	int min = -1, sum = 0;
	for (int i = m; i <= n; i++)
	{
		if (isPrime(i))
		{
			if (!isMin)
			{
				min = i;
				isMin = true;
			}
			sum += i;
		}
	}

	if (isMin)
		cout << sum << "\n" << min;
	else
		cout << -1;
	return 0;
}