#include <iostream>
#include <cmath>
using namespace std;

int primeCnt(int n)
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int* arr = new int[n*2 + 1];
	fill_n(arr, n*2, 0);	*(arr + 1) = 1;
	for (int i = 2; i <= sqrt(n*2); i++)
	{
		if (*(arr + i) == 1)	continue;
		for (int j = 2; i * j <= n*2; j++)
			*(arr + i * j) = 1;
	}

	int cnt = 0;
	for (int i = n; i <= n * 2; i++)
		if (*(arr + i) == 0 && i != n)
			cnt++;
	return cnt;
}

int main()
{
	int n = -1;
	do
	{
		cin >> n;
		if (n != 0)
		{
			if (n == 1)
				cout << 1 << "\n";
			else
				cout << primeCnt(n) << "\n";
		}
	} while (n != 0);
	return 0;
}