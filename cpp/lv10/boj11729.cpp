#include <iostream>
#include <cmath>
using namespace std;

void move(int n, int a, int b, int c)
{
	if (n == 1)
		cout << a << " " << c << "\n";
	else
	{
		move(n - 1, a, c, b);
		cout << a << " " << c << "\n";
		move(n - 1, b, a, c);
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;	cin >> n;
	cout << pow(2, n) - 1 << "\n";
	move(n, 1, 2, 3);
	return 0;
}
