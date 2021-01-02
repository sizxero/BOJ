#include <iostream>
#include <vector>
using namespace std;

int n;
long long result[101] = {0, 1, 1, 1, 2, 2, };
void padovan()
{
	for (int i = 6; i <= n; i++)
		result[i] = result[i - 5] + result[i - 1];
}

int main()
{
	int t;	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		padovan();
		cout << result[n] << "\n";
	}

	return 0;
}