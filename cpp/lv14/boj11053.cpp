#include <iostream>
#include <algorithm>
using namespace std;

int n, sum = 0;
int arr[1001], dp[1001];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j <= n; j++)
		{
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		sum = max(sum, dp[i]);
	}
	
	cout << sum << "\n";
}