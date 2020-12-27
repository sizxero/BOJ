#include <iostream>
#include <vector>
using namespace std;

int nextNum(int n) 
{
	int tmp = n;
	int next = 0;
	while (n / 10 != 0) 
	{
		next += n % 10;
		n /= 10;
	}
	next += (n + tmp);
	return next;
}

bool isSelfnum(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n == nextNum(i))
			return false;
	}
	return true;
}
int main()
{
	for(int i = 1; i <= 10000; i++)
	{
		if (isSelfnum(i))
			cout << i << "\n";
	}
	return 0;
}