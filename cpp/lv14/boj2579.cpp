#include <iostream>
#include <algorithm>
using namespace std;

int n, stair[301], dp[301];
void fillStair()
{
	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];
	dp[3] = max(stair[1] + stair[2], stair[2] + stair[3]);

	for (int i = 3; i <= n; i++)
		dp[i] = max(dp[i - 3] + stair[i - 1] + stair[i], dp[i - 2] + stair[i]);	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> stair[i];

	fillStair();
	cout << dp[n] << "\n";

	return 0;
}