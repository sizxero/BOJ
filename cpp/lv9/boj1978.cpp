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
	int n, cnt = 0;	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int p;	cin >> p;
		if (isPrime(p))
			cnt++;
	}
	cout << cnt;
	return 0;
}