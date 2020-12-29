#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int m, n;	cin >> m >> n;
	int* arr = new int[n];
	fill_n(arr, n, 0);	*(arr + 1) = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (*(arr + i) == 1)	continue;
		for (int j = 2; i * j <= n; j++)
			*(arr + i * j) = 1;
	}


	for (int i = m; i <= n; i++)
		if (*(arr + i) == 0)
			cout << i << "\n";
	return 0;
}