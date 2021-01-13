#include <iostream>
#define moduler 1000000000
using namespace std;

int n, sum = 0;
long long dp[101][10];
int main()
{
	cin >> n;
	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				dp[i][0] = dp[i - 1][1];
			else if (j == 9)
				dp[i][9] = dp[i - 1][8];
			else
				dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % moduler;
		}
	}

	for (int i = 1; i < 10; i++)
		sum = (sum + dp[n][i]) % moduler;
	cout << sum % moduler;
	return 0;
}