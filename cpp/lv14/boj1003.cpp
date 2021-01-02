#include <iostream>
using namespace std;

long long result[91] = { 0, 1, };
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
	int t, n;	cin >> t; 
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if (n == 0)
			cout << "1 0" << "\n";
		else
			cout << fibonacci(n - 1) << " " << fibonacci(n) << "\n";
	}
	return 0;
}