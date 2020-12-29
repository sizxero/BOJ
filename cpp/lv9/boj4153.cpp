#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	do
	{
		cin >> a >> b >> c;
		int num[] = { a, b, c };
		sort(num, num+3);
		if (!(a == 0 && b == 0 && c== 0))
		{
			if (pow(num[0], 2) + pow(num[1], 2) == pow(num[2], 2))
				cout << "right\n";
			else
				cout << "wrong\n";
		}
		
	} while (!(a == 0 && b == 0 && c == 0));
	return 0;
}