#include <iostream>
using namespace std;

int main()
{
	int n, m;
	long long cnt5 = 0, cnt2 = 0;
	cin >> n >> m;

	for (long long i = 5; i <= n; i *= 5)
		cnt5 += n / i;
	for (long long i = 5; i <= n - m; i *= 5)
		cnt5 -= (n-m) / i;
	for (long long i = 5; i <= m; i *= 5)
		cnt5 -= m / i;

	for (long long i = 2; i <= n; i *= 2)
		cnt2 += n / i;
	for (long long i = 2; i <= n - m; i *= 2)
		cnt2 -= (n-m) / i;
	for (long long i = 2; i <= m; i *= 2)
		cnt2 -= m / i;

	if (cnt5 > cnt2)
		cout << cnt2;
	else
		cout << cnt5;
}