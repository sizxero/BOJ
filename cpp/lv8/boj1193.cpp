#include <iostream>
using namespace std;

int main()
{
	int n, idx = 2, sum = 0;	cin >> n;
	for (int i = 1; i + sum < n; i++)
	{
		sum += i;
		idx++;
	}

	if (idx % 2 == 0)
		cout << idx - (n - sum) << "/" << n - sum;
	else
		cout << n - sum << "/" << idx - (n - sum);

	return 0;
}