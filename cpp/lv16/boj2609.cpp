#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
	int gcd = 1;
	for (int i = 2; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			if (gcd < i)
				gcd = i;
		}
	}
	return gcd;
}

int main()
{
	int a, b;	cin >> a >> b;
	cout << findGCD(a, b) << "\n" << a / findGCD(a, b) * b;
}