#include <iostream>
using namespace std;

struct Fraction
{
	int numer;
	int denom;

	Fraction()
	{
		numer = 1;
		denom = 1;
	}

	Fraction(int n, int d)
	{
		numer = n;
		denom = d;
	}

	int findGCD()
	{
		int gcd = 1;
		int maxNum = max(numer, denom);
		for (int i = 2; i <= maxNum; i++)
		{
			if (numer % i == 0 && denom % i == 0)
				gcd = i;
		}
		return gcd;
	}

	void reduction()
	{
		int gcd = findGCD();
		numer /= gcd;
		denom /= gcd;
	}
};

int main()
{
	int n;	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (i != 0)
		{
			Fraction f(arr[0], arr[i]);
			f.reduction();
			cout << f.numer << "/" << f.denom << "\n";
		}

	}
		
	return 0;
}