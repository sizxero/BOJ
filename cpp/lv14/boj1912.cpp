#include <iostream>
#include <algorithm>
#define MAX 100001
using namespace std;

int arr[MAX], dp[MAX];

int main()
{
	int n;	 cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		dp[i] = arr[i];
	}

	int maxSum = dp[0];
	for (int i = 0; i < n; i++)
	{
		dp[i] = max(dp[i], dp[i-1] + arr[i]);
		if (dp[i] > maxSum)
			maxSum = dp[i];
	}

	cout << maxSum << "\n";
	return 0;
}