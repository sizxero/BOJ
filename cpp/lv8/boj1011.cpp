#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int t, x, y, n, d;	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		n = (int)sqrt(y - x);
		d = y - x;
		if (d == pow(n, 2))
			cout << 2 * n - 1 << "\n";
		else if (d > pow(n, 2) && d <= pow(n, 2) + n)
			cout << 2 * n << "\n";
		else if (d < pow(n + 1, 2) && d > pow(n, 2) + n)
			cout << 2 * n + 1 << "\n";

	}
	return 0;
}