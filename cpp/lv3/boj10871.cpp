#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t, x, n;	cin >> t >> x;
	for (int i = 0; i < t; i++) 
	{
		cin >> n;
		if (n < x)
			cout << n << " ";
	}
	return 0;
}