#include <iostream>
#include <cmath>
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
	int t;	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, p;	cin >> n;
		for (int i = n / 2; i >= 2; i--)
		{
			if (isPrime(i))
			{
				p = i;
				if (isPrime(n - p))
				{
					break;
				}
			}
		}
		cout << p << " " << n - p << "\n";
	}
	return 0;
}