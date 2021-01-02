#include <iostream>
using namespace std;

int nCk(int n, int k)
{
	int numer = 1, denom = 1;
	for (int j = 0; j < k; j++)
	{
		numer *= n;
		n--;
	}

	for (int i = 1; i <= k; i++)
		denom *= i;
	return numer / denom;
}
int main()
{
	int n, k;
	cin >> n >> k;
	cout << nCk(n, k);
	return 0;
}