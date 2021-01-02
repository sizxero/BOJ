#include <iostream>
using namespace std;

long long result[91] = {0, 1, };
long long fibonacci(int n)
{
	if (n == 0 || n == 1)
		return result[n];
	else if (result[n] == 0)
		result[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return result[n];
}
int main()
{
	int n;	cin >> n;
	cout << fibonacci(n);
	return 0;
}